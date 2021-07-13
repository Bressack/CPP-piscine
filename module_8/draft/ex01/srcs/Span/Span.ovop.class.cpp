/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.ovop.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 14:32:05 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Span		&Span::operator=(Span const &rhs)
{
	this->_size = rhs.get__size();
	this->_lst.clear();
	this->_lst = rhs._lst;
	return (*this);
}

std::ostream	&Span::dbl_leftshift(std::ostream &o) const
{
	typedef std::multiset<int>::iterator _Iterator;
	for (_Iterator it = this->_lst.begin(); it != this->_lst.end(); it++)
	{
		o << "["C_G_RED << *it << C_RES"]";
	}
	return (o);
}

std::ostream	&operator<<(std::ostream &o, Span const &i)
{
	return (i.dbl_leftshift(o));
}
