/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cd.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 13:06:16 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

PlasmaRifle::PlasmaRifle(void)  // constructor
{
	this->set__name("Plasma Rifle");
	this->set__ap_cost(5);
	this->set__damage(21);
	std::cout
		<< __FUNCTION__
		<< " created with basic constructor for object: "
		<< this->get__name()
		<< std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)  // constructor by copy
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

PlasmaRifle::~PlasmaRifle(void) // destructor
{
	std::cout
		<< __FUNCTION__
		<< "destructor called for object: "
		<< this->get__name()
		<< std::endl;
}
