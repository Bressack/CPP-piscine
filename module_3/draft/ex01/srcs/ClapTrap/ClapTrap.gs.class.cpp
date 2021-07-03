/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.gs.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/03 19:54:43 by tharchen         ###   ########.fr       */
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
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int	ClapTrap::get__MAX_HIT_POINT(void) const
{
	return (this->_MAX_HIT_POINT);
}

void	ClapTrap::set__MAX_HIT_POINT(int value)
{
	this->_MAX_HIT_POINT = value;
}

////////////////////////////////////////////////////////////////////////////////


int	ClapTrap::get__MAX_ENERGY_POINT(void) const
{
	return (this->_MAX_ENERGY_POINT);
}

void	ClapTrap::set__MAX_ENERGY_POINT(int value)
{
	this->_MAX_ENERGY_POINT = value;
}

////////////////////////////////////////////////////////////////////////////////


int	ClapTrap::get__ATTACK_DAMAGE(void) const
{
	return (this->_ATTACK_DAMAGE);
}

void	ClapTrap::set__ATTACK_DAMAGE(int value)
{
	this->_ATTACK_DAMAGE = value;
}

////////////////////////////////////////////////////////////////////////////////


int	ClapTrap::get__ATTACK_COST(void) const
{
	return (this->_ATTACK_COST);
}

void	ClapTrap::set__ATTACK_COST(int value)
{
	this->_ATTACK_COST = value;
}

////////////////////////////////////////////////////////////////////////////////


std::string	ClapTrap::get__ROBOT_TYPE(void) const
{
	return (this->_ROBOT_TYPE);
}

void	ClapTrap::set__ROBOT_TYPE(std::string value)
{
	this->_ROBOT_TYPE = value;
}

