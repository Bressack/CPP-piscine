/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cd.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/22 12:52:06 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)  // constructor
{
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::HumanA(HumanA const &src): _weapon(src.get__weapon())  // constructor by copy
{
	*this = src;
}

HumanA::~HumanA(void) // destructor
{

}
