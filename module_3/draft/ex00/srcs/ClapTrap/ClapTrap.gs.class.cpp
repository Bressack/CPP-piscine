/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.gs.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/02 19:05:50 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _name

std::string	ClapTrap::get__name(void) const
{
	return (this->_name);
}

void	ClapTrap::set__name(std::string _name)
{
	this->_name = _name;
}

////////////////////////////////////////////////////////////////////////////////


//// private _hitpoint

int	ClapTrap::get__hitpoint(void) const
{
	return (this->_hitpoint);
}

void	ClapTrap::set__hitpoint(int _hitpoint)
{
	this->_hitpoint = _hitpoint;
}

////////////////////////////////////////////////////////////////////////////////


//// private _energy_point

int	ClapTrap::get__energy_point(void) const
{
	return (this->_energy_point);
}

void	ClapTrap::set__energy_point(int _energy_point)
{
	this->_energy_point = _energy_point;
}

////////////////////////////////////////////////////////////////////////////////


//// private _attack_damage

int	ClapTrap::get__attack_damage(void) const
{
	return (this->_attack_damage);
}

void	ClapTrap::set__attack_damage(int _attack_damage)
{
	this->_attack_damage = _attack_damage;
}

////////////////////////////////////////////////////////////////////////////////

