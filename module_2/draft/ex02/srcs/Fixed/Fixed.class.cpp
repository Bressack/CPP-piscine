/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/02 14:47:40 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int	const	Fixed::_num = 8;

// PROTECTED MEMBERS FUNCTION : PROMF

/* ************************************************************************** */
/* ************************************************************************** */

// PRIVATE MEMBERS FUNCTION : PRIMF

/* ************************************************************************** */
/* ************************************************************************** */

// PUBLIC MEMBERS FUNCTION : PUMF

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const n)
{
	this->_value = n;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (1 << this->_num));
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_num);
}


/* ************************************************************************** */
/* ************************************************************************** */
