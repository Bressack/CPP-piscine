/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 15:25:54 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP
# include <dispatcher.hpp>

class Span
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		size_t _size;
		std::multiset<int> _lst;
		// PRIVATE MEMBERS FUNCTION : PRIMF
		Span(void);  // constructor

	public:
		class FullSpanException: public std::exception {
			const char* what() const throw();
		};
		class NotEnoughNumbersException: public std::exception {
			const char* what() const throw();
		};
		// CONSTRUCTOR / DESTRUCTOR : CD
		Span(size_t size);  // constructor
		Span(const Span &src);  // constructor by copy
		virtual ~Span(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Span	&operator=(const Span &rhs);
		// GETTERS / SETTERS : GS
		size_t		get__size(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void addNumber(int value);
		std::ostream	&dbl_leftshift(std::ostream &o) const;

		template<typename InputIterator>
		void addNumber(InputIterator begin, InputIterator end)
		{
			if (this->_lst.size() + std::distance(begin, end) > this->_size)
				throw (Span::FullSpanException());
			this->_lst.insert(begin, end);
		}

		size_t shortestSpan(void) const;
		size_t longestSpan(void) const;

};

std::ostream	&operator<<(std::ostream &o, const Span &i);
#endif
