/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.ovop.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/01 13:15:50 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Fixed		&Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.getRawBits();
	return (o);
}
