/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cd.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/08 11:15:43 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Fixed::Fixed(void)  // constructor
{
	this->_value = 0;
}

Fixed::Fixed(int n)  // constructor
{
	setRawBits(n << this->_num);
}

Fixed::Fixed(float n)  // constructor
{
	setRawBits(roundf(n * (1 << this->_num)));
}

Fixed::Fixed(Fixed const &src)  // constructor by copy
{
	*this = src;
}

Fixed::~Fixed(void) // destructor
{

}
