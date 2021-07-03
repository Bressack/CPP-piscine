/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cd.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/03 20:19:09 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

ClapTrap::ClapTrap(void)  // constructor
{
	this->_MAX_HIT_POINT	= 10;
	this->_MAX_ENERGY_POINT	= 10;
	this->_ATTACK_DAMAGE	= 0;
	this->_ATTACK_COST		= 5;
	this->_ROBOT_TYPE		= "ClapTrap";
	this->_attack_damage	= this->_ATTACK_DAMAGE;
	this->_energy_point		= this->_MAX_ENERGY_POINT;
	this->_hitpoint			= this->_MAX_HIT_POINT;
	std::cout
		<< this->_ROBOT_TYPE
		<< " built with default constructor!"
		<< std::endl;
}

ClapTrap::ClapTrap(std::string name)  // constructor
{
	this->_MAX_HIT_POINT	= 10;
	this->_MAX_ENERGY_POINT	= 10;
	this->_ATTACK_DAMAGE	= 0;
	this->_ATTACK_COST		= 5;
	this->_ROBOT_TYPE		= "ClapTrap";
	this->_name				= name;
	this->_attack_damage	= this->_ATTACK_DAMAGE;
	this->_energy_point		= this->_MAX_ENERGY_POINT;
	this->_hitpoint			= this->_MAX_HIT_POINT;
	std::cout
		<< this->_ROBOT_TYPE
		<< " <"
		<< this->_name
		<< "> built !"
		<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)  // constructor by copy
{
	this->_name = src.get__name();
	this->_attack_damage = src.get__attack_damage();
	this->_energy_point = src.get__energy_point();
	this->_hitpoint = src.get__hitpoint();
	std::cout
		<< this->_ROBOT_TYPE
		<< " <"
		<< this->_name
		<< "> built by copy of " << src.get__name() << " !"
		<< std::endl;
}

ClapTrap::~ClapTrap(void) // destructor
{
	std::cout
		<< __FUNCTION__
		<< " <"
		<< this->_name
		<< "> destroyed !"
		<< std::endl;
}
