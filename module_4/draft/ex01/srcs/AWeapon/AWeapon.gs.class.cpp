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

//// protected _name

std::string	AWeapon::get__name(void) const
{
	return (this->_name);
}

void	AWeapon::set__name(std::string _name)
{
	this->_name = _name;
}

////////////////////////////////////////////////////////////////////////////////


//// protected _ap_cost

int	AWeapon::get__ap_cost(void) const
{
	return (this->_ap_cost);
}

void	AWeapon::set__ap_cost(int _ap_cost)
{
	this->_ap_cost = _ap_cost;
}

////////////////////////////////////////////////////////////////////////////////


//// protected _damage

int	AWeapon::get__damage(void) const
{
	return (this->_damage);
}

void	AWeapon::set__damage(int _damage)
{
	this->_damage = _damage;
}

////////////////////////////////////////////////////////////////////////////////

