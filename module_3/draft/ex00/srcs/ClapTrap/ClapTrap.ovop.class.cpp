/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.ovop.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 12:21:51 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

ClapTrap		&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_attack_damage = rhs.get__attack_damage();
	this->_energy_point = rhs.get__energy_point();
	this->_hitpoint = rhs.get__hitpoint();
	this->_name = rhs.get__name();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i)
{
	o
		<< ROBOT_TYPE
		<< " <" << i.get__name() << "> ";
	return (o);
}
