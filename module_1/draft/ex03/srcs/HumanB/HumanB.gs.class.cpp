/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.gs.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 19:53:08 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _weapon

Weapon	*HumanB::get__weapon(void) const
{
	return (this->_weapon);
}

void	HumanB::set__weapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

////////////////////////////////////////////////////////////////////////////////


//// private _name

std::string	HumanB::get__name(void) const
{
	return (this->_name);
}

void	HumanB::set__name(std::string _name)
{
	this->_name = _name;
}

////////////////////////////////////////////////////////////////////////////////

