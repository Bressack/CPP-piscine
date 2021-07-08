/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.ovop.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/08 08:19:53 by tharchen         ###   ########.fr       */
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
	o << i.getRawBits();
	return (o);
}
