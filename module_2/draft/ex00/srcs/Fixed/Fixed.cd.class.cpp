/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cd.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/08 11:43:08 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Fixed::Fixed(void)  // constructor
{
	this->_value = 0;
	std::cout
		<< "Constructor called for object type Fixed with value of "
		<< this->getRawBits()
		<< std::endl;
}

Fixed::Fixed(Fixed const &src)  // constructor by copy
{
	this->setRawBits(src.getRawBits());
	std::cout
		<< "Constructor by copy called for object type Fixed with value of "
		<< this->getRawBits()
		<< std::endl;
}

Fixed::~Fixed(void) // destructor
{
	std::cout
		<< "Destructor called for object type Fixed with value of "
		<< this->getRawBits()
		<< std::endl;
}
