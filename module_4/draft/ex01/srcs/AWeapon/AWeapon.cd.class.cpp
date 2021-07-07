/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cd.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 13:05:29 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

AWeapon::AWeapon(void)  // constructor
{
	std::cout
		<< __FUNCTION__
		<< " created with basic constructor for object: "
		<< this->get__name()
		<< std::endl;
}

AWeapon::AWeapon(std::string const & name, int ap_cost, int damage):  // constructor
_name(name),
_ap_cost(ap_cost),
_damage(damage)
{
	std::cout
		<< __FUNCTION__
		<< " created with param constructor for object: "
		<< this->get__name()
		<< std::endl;
}

AWeapon::AWeapon(AWeapon const &src)  // constructor by copy
{
	this->set__name(src.get__name());
	this->set__ap_cost(src.get__ap_cost());
	this->set__damage(src.get__damage());
	std::cout
		<< __FUNCTION__
		<< " created with copy constructor for object: "
		<< this->get__name()
		<< std::endl;
}

AWeapon::~AWeapon(void) // destructor
{
	std::cout
		<< __FUNCTION__
		<< "destructor called for object: "
		<< this->get__name()
		<< std::endl;
}
