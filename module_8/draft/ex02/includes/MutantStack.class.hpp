/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 16:47:26 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP
# include <dispatcher.hpp>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		MutantStack(void);  // constructor
		MutantStack(MutantStack<T> const &src);  // constructor by copy
		virtual ~MutantStack(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		MutantStack<T> &operator=(MutantStack<T> const &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator				begin(void);
		reverse_iterator		rbegin(void);
		iterator				end(void);
		reverse_iterator		rend(void);
		// const version of iterators and reverse iterators
		const_iterator			begin(void) const;
		const_reverse_iterator	rbegin(void) const;
		const_iterator			end(void) const;
		const_reverse_iterator	rend(void) const;

};

template<typename T>
MutantStack<T>::MutantStack():
	std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &rhs):
	std::stack<T>(rhs)
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &src)
{
	this->c = src.c;
	return (*this);
}

// iterators
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

// const version of iterators and reverse iterators
template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin(void) const
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend(void) const
{
	return (this->c.rend());
}

#endif
