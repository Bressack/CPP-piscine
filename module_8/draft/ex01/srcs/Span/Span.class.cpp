/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 15:44:36 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

// PROTECTED MEMBERS FUNCTION : PROMF

/* ************************************************************************** */
/* ************************************************************************** */

// PRIVATE MEMBERS FUNCTION : PRIMF

/* ************************************************************************** */
/* ************************************************************************** */

// PUBLIC MEMBERS FUNCTION : PUMF
const char*	Span::FullSpanException::what() const throw()
{
	return "SpanException: Span is already full";
}

const char*	Span::NotEnoughNumbersException::what() const throw()
{
	return "SpanException: not enough numbers in Span";
}

void Span::addNumber(int value)
{
	if (this->_lst.size() < this->_size)
		this->_lst.insert(value);
	else
		throw (Span::FullSpanException());
}

size_t Span::shortestSpan(void) const
{
	if (this->_lst.size() <= 1)
		throw (Span::NotEnoughNumbersException());

	std::multiset<int>::iterator first = this->_lst.begin();
	std::multiset<int>::iterator next = ++this->_lst.begin();
	size_t minDiff = std::abs(*next++ - *first++);
	while (next != this->_lst.end())
	{
		size_t diff = std::abs(*next - *first);
		if (diff < minDiff)
			minDiff = diff;
		first++;
		next++;
	}
	return (minDiff);
}

size_t Span::longestSpan(void) const
{
	if (this->_lst.size() <= 1)
		throw (Span::NotEnoughNumbersException());

	int biggest = *std::max_element(this->_lst.begin(), this->_lst.end());
	int smallest = *std::min_element(this->_lst.begin(), this->_lst.end());
	return (std::abs(biggest - smallest));
}
/* ************************************************************************** */
/* ************************************************************************** */
