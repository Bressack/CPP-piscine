/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cd.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/08 08:11:22 by tharchen         ###   ########.fr       */
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

Fixed::Fixed(int n)  // constructor
{
	setRawBits(n << this->_num);
	std::cout
		<< "Constructor param (type int) called for object type Fixed with value of "
		<< this->getRawBits()
		<< std::endl;
}

Fixed::Fixed(float n)  // constructor
{
	setRawBits(roundf(n * (1 << this->_num)));
	std::cout
		<< "Constructor param (type float) called for object type Fixed with value of "
		<< this->getRawBits()
		<< std::endl;
}

Fixed::Fixed(Fixed const &src)  // constructor by copy
{
	*this = src;
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
