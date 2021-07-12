/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/12 19:09:19 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP
# include <dispatcher.hpp>

class BufferOverflowException: public std::exception
{
	public:
		BufferOverflowException(void) {}
		const char * what() const throw()
		{
			return ("access to unreachable cell of array");
		}
};

template<typename T>
class Array
{
	typedef T* pointer;
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		pointer	_arr;
		size_t	_size;
		// PRIVATE MEMBERS FUNCTION : PRIMF
		void	clone_arr(const Array &src)
		{
			if (this->_arr != NULL)
			{
				delete[] this->_arr;
				this->_arr = NULL;
				this->_size = 0;
			}
			if (src.get__size() > 0)
			{
				this->_size = src.get__size();
				this->_arr = new T[this->_size];
				for (size_t i = 0; i < this->_size; i++)
					this->_arr[i] = src._arr[i];
					// this->_arr[i] = (src.get__arr())[i];
			}
		}
	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Array(void)  // constructor
		{
			this->_arr = new T[0];
			this->_size = 0;
			std::cout << "[ default constructor         ] { Array } (_arr: " << this->_arr << ", _size: " << this->_size << ")" << std::endl;
		}
		Array(size_t size)  // constructor
		{
			this->_arr = new T[size];
			for (size_t i = 0; i < size; i++)
				bzero(static_cast<void *>(&this->_arr[i]), sizeof(T));
			this->_size = size;
			std::cout << "[ param constructor           ] { Array } (_arr: " << this->_arr << ", _size: " << this->_size << ")" << std::endl;
		}
		Array(const Array<T> &src)  // constructor by copy
		{
			this->_arr = NULL;
			this->_size = 0;
			clone_arr(src);
			std::cout << "[ copy constructor            ] { Array } (_arr: " << this->_arr << ", _size: " << this->_size << ")" << std::endl;
		}
		virtual ~Array(void) // destructor
		{
			delete[] this->_arr;
			std::cout << "[ destructor                  ] { Array } (_arr: " << this->_arr << ", _size: " << this->_size << ")" << std::endl;
		}
		// OVERLOADED OPERATORS : OVOP
		Array &	operator=(const Array &rhs)
		{
			std::cout << "[ operator= before assignment ] { Array } (" << *this << ")" << std::endl;
			clone_arr(rhs);
			std::cout << "[ operator= after assignment  ] { Array } (" << *this << ")" << std::endl;
			return (*this);
		}
		T &		operator[](size_t index)
		{
			if (index >= this->get__size())
				throw (BufferOverflowException());
			return (this->_arr[index]);
		}
		std::ostream	&dbl_leftshift(std::ostream &o) const
		{
			for (size_t j = 0; j < this->get__size(); j++)
			{
				o << "["C_G_RED << this->_arr[j] << C_RES"]";
			}
			return (o);
		}
		// GETTERS / SETTERS : GS
		size_t		get__size(void) const
		{
			return (this->_size);
		}
		const pointer &	get__arr(void) const
		{
			return (this->_arr);
		}
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		size_t size(void) const
		{
			return (this->get__size());
		}
};

template<typename T>
std::ostream	&operator<<(std::ostream &o, const Array<T> &i)
{
	return (i.dbl_leftshift(o));
}
#endif
