/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.gs.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/25 18:54:48 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _nfix

int	Fixed::get__nfix(void) const
{
	return (this->_nfix);
}

void	Fixed::set__nfix(int _nfix)
{
	this->_nfix = _nfix;
}

////////////////////////////////////////////////////////////////////////////////


//// private _bitfract

const int	Fixed::get__bitfract(void) const
{
	return (this->_bitfract);
}

void	Fixed::set__bitfract(const int _bitfract)
{
	this->_bitfract = _bitfract;
}

////////////////////////////////////////////////////////////////////////////////

