/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cd.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 14:24:35 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Span::Span(void)  // constructor
{

}

Span::Span(size_t size):  // constructor
_size(size)
{

}

Span::Span(Span const &src)  // constructor by copy
{
	this->_lst.clear();
	this->_lst = src._lst;
}

Span::~Span(void) // destructor
{
	this->_lst.clear();
}
