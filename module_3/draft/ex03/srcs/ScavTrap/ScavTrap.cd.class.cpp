/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cd.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 12:02:09 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

ScavTrap::ScavTrap(void)  // constructor
{
	std::cout
		<< this->_ROBOT_TYPE
		<< " built with default constructor!"
		<< std::endl;
}

ScavTrap::ScavTrap(std::string name)  // constructor
{
	this->set__MAX_HIT_POINT(100);
	this->set__MAX_ENERGY_POINT(50);
	this->set__ATTACK_DAMAGE(20);
	this->set__ATTACK_COST(10);
	this->set__ROBOT_TYPE("ScavTrap");
	this->_attack_damage	= this->get__ATTACK_DAMAGE();
	this->_energy_point		= this->get__MAX_ENERGY_POINT();
	this->_hitpoint			= this->get__MAX_HIT_POINT();
	this->_name				= name;
	std::cout
		<< this->_ROBOT_TYPE
		<< " <"
		<< this->get__name()
		<< "> built !"
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)  // constructor by copy
{
	this->set__name(src.get__name());
	this->set__attack_damage(src.get__attack_damage());
	this->set__energy_point(src.get__energy_point());
	this->set__hitpoint(src.get__hitpoint());
	std::cout
		<< this->_ROBOT_TYPE
		<< " <"
		<< this->get__name()
		<< "> built by copy of " << src.get__name() << " !"
		<< std::endl;
}

ScavTrap::~ScavTrap(void) // destructor
{
	std::cout
		<< __FUNCTION__
		<< " <"
		<< this->get__name()
		<< "> destroyed !"
		<< std::endl;
}
