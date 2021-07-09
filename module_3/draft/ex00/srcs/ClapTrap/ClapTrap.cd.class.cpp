/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cd.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 11:57:05 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

ClapTrap::ClapTrap(void)  // constructor
{

}

ClapTrap::ClapTrap(std::string name):  // constructor
_name(name),
_attack_damage(ATTACK_DAMAGE),
_energy_point(MAX_ENERGY_POINT),
_hitpoint(MAX_HIT_POINT)
{
	std::cout
		<< ROBOT_TYPE
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
		<< ROBOT_TYPE
		<< " <"
		<< this->_name
		<< "> built by copy of " << src.get__name() << " !"
		<< std::endl;
}

ClapTrap::~ClapTrap(void) // destructor
{
	std::cout
		<< ROBOT_TYPE
		<< " <"
		<< this->_name
		<< "> destroyed !"
		<< std::endl;
}
