/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cd.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 20:40:23 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Ice::Ice(void)  // constructor
{
	this->_type = "Ice";
	std::cout
		<< __FUNCTION__
		<< " basic constructor called !"
		<< std::endl;
}

Ice::Ice(Ice const &src)  // constructor by copy
{
	this->_type = src.get__type();
	std::cout
		<< __FUNCTION__
		<< " copy constructor called !"
		<< std::endl;
}

Ice::~Ice(void) // destructor
{
	std::cout
		<< &(__FUNCTION__[1])
		<< " destructor called !"
		<< std::endl;
}
