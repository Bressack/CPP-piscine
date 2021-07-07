/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cd.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 13:07:09 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

PowerFist::PowerFist(void)  // constructor
{
	this->set__name("Power Fist");
	this->set__ap_cost(8);
	this->set__damage(50);
	std::cout
		<< __FUNCTION__
		<< " created with basic constructor for object: "
		<< this->get__name()
		<< std::endl;
}

PowerFist::PowerFist(PowerFist const &src)  // constructor by copy
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

PowerFist::~PowerFist(void) // destructor
{
	std::cout
		<< __FUNCTION__
		<< "destructor called for object: "
		<< this->get__name()
		<< std::endl;
}
