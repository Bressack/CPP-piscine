/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.ovop.class.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 12:24:30 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->set__attack_damage(rhs.get__attack_damage());
	this->set__energy_point(rhs.get__energy_point());
	this->set__hitpoint(rhs.get__hitpoint());
	this->set__name(rhs.get__name());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i)
{
	o	<< i.get__ROBOT_TYPE()
		<< " <"
		<< i.get__name()
		<< "> "
		<< std::endl;
	return (o);
}
