/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.ovop.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/08 14:31:43 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Fixed		&Fixed::operator=(Fixed const &rhs)
{
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}

/*
** comparaison
*/
bool	Fixed::operator>(Fixed const &rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(Fixed const &rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const &rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const &rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const &rhs)
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const &rhs)
{
	return (this->toFloat() != rhs.toFloat());
}


/*
** math operation
*/
Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	if (rhs.toFloat() != 0)
		return (Fixed(this->toFloat() / rhs.toFloat()));
	else
	{
		std::cout << "Cannot divide by 0, resolving results to 0." << std::endl;
		return (Fixed(0));
	}
}

Fixed			&Fixed::operator++(void) // ++var
{
	this->_value++;
	return (*this);
}

Fixed			Fixed::operator++(int) // var++
{
	Fixed	cpy(*this);
	operator++();
	return (cpy);
}

Fixed			&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed	cpy(*this);
	operator--();
	return (cpy);
}

Fixed	&Fixed::min(Fixed &l, Fixed &rhs)
{
	return ((l.toFloat() < rhs.toFloat()) ? l : rhs);
}

Fixed 	&Fixed::max(Fixed &l, Fixed &rhs)
{
	return ((l.toFloat() > rhs.toFloat()) ? l : rhs);
}

Fixed const		&Fixed::min(Fixed const &l, Fixed const &rhs)
{
	return ((l.toFloat() < rhs.toFloat()) ? l : rhs);
}

Fixed const		&Fixed::max(Fixed const &l, Fixed const &rhs)
{
	return ((l.toFloat() > rhs.toFloat()) ? l : rhs);
}
