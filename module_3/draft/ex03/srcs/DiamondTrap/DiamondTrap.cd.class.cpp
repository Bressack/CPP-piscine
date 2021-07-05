/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cd.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 12:12:58 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

DiamondTrap::DiamondTrap(void)  // constructor
{
	std::cout
		<< this->_ROBOT_TYPE
		<< " built with default constructor!"
		<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name)  // constructor
{
	FragTrap	frag_tmp("tmp"); // most clean option i found
	ScavTrap	scav_tmp("tmp"); // most clean option i found

	this->set__MAX_HIT_POINT(frag_tmp.get__MAX_HIT_POINT());
	this->set__MAX_ENERGY_POINT(scav_tmp.get__MAX_ENERGY_POINT());
	this->set__ATTACK_DAMAGE(frag_tmp.get__ATTACK_DAMAGE());
	this->set__ATTACK_COST(scav_tmp.get__ATTACK_COST());
	this->set__ROBOT_TYPE("DiamondTrap");
	this->_attack_damage	= this->get__ATTACK_DAMAGE();
	this->_energy_point		= this->get__MAX_ENERGY_POINT();
	this->_hitpoint			= this->get__MAX_HIT_POINT();
	this->_name				= name;
	this->_clapname			= name + "_clap_name";
	std::cout
		<< this->_ROBOT_TYPE
		<< " <"
		<< this->get__name()
		<< "> built !"
		<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)  // constructor by copy
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

DiamondTrap::~DiamondTrap(void) // destructor
{
	std::cout
		<< __FUNCTION__
		<< " <"
		<< this->get__name()
		<< "> destroyed !"
		<< std::endl;
}
