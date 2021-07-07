/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern_gs.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/18 13:28:46 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// protected _type

std::string	Enemy::get__type(void) const
{
	return (this->_type);
}

void	Enemy::set__type(std::string _type)
{
	this->_type = _type;
}

////////////////////////////////////////////////////////////////////////////////


//// protected _hp

int	Enemy::get__hp(void) const
{
	return (this->_hp);
}

void	Enemy::set__hp(int _hp)
{
	this->_hp = _hp;
}

////////////////////////////////////////////////////////////////////////////////

