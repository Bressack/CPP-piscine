/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 14:00:14 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

// PROTECTED MEMBERS FUNCTION : PROMF

/* ************************************************************************** */
/* ************************************************************************** */

// PRIVATE MEMBERS FUNCTION : PRIMF

/* ************************************************************************** */
/* ************************************************************************** */

// PUBLIC MEMBERS FUNCTION : PUMF
void	ClapTrap::be_repaired(unsigned int amount)
{
	std::cout
		<< this->_ROBOT_TYPE
		<< " <"
		<< this->_name
		<< "> repaired from "
		<< this->_hitpoint
		<< " to "
		<< this->_hitpoint + amount
		<< std::endl;
	this->_hitpoint += amount;
	std::cout << "Energy points totally restored !" << std::endl;
	this->_energy_point = this->_MAX_ENERGY_POINT;
}

void	ClapTrap::take_damage(unsigned int amount)
{
	if (this->_hitpoint > 0)
	{
		std::cout
			<< this->_ROBOT_TYPE
			<< " <"
			<< this->_name
			<< "> took "
			<< amount
			<< " damage(s). Hit Points: "
			<< this->_hitpoint - (int)amount
			<< "/"
			<< this->_MAX_HIT_POINT
			<< std::endl;
		this->_hitpoint -= amount;
	}
	if (this->_hitpoint <= 0)
	{
		std::cout
			<< this->_ROBOT_TYPE
			<< " <"
			<< this->_name
			<< "> is broken. Need to be repaired. Hit Points: "
			<< this->_hitpoint
			<< "/"
			<< this->_MAX_HIT_POINT
			<< std::endl;
	}
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_energy_point < this->_ATTACK_COST)
	{
		std::cout
			<< this->_ROBOT_TYPE
			<< " <"
			<< this->_name
			<< "> fail to attacks "
			<< target
			<< ", not enough energy. "
			<< "Required: "
			<< this->_ATTACK_COST
			<< ", Remaining:"
			<< this->_energy_point
			<< "/"
			<< this->_MAX_ENERGY_POINT
			<< ". Need to be repaired."
			<< std::endl;
	}
	else
	{
		std::cout
			<< this->_ROBOT_TYPE
			<< " <"
			<< this->_name
			<< "> attacks "
			<< target
			<< std::endl;
			this->_energy_point -= this->_ATTACK_COST;
	}
}

int	ClapTrap::fight(ClapTrap & attacker, ClapTrap & defender)
{
	attacker.attack(defender.get__name());
	if (attacker.get__energy_point() >= attacker._ATTACK_COST)
		defender.take_damage(attacker._ATTACK_DAMAGE);
	if (defender.get__hitpoint() <= 0)
		return (1);
	return (0);
}

void	ClapTrap::repair(ClapTrap & clap)
{
	clap.be_repaired(clap._MAX_HIT_POINT - clap.get__hitpoint());
}

/* ************************************************************************** */
/* ************************************************************************** */
