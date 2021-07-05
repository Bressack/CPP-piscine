/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cd.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 11:44:24 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Zombie::Zombie(void)  // constructor
{

}

Zombie::Zombie(std::string name):  // constructor
_name(name)
{
	std::cout
		<< "Zombie constructor called ("
		<< this->get__name()
		<< ")"
		<< std::endl;
}

Zombie::Zombie(Zombie const &src)  // constructor by copy
{
	this->set__name(src.get__name());
}

Zombie::~Zombie(void) // destructor
{
	std::cout
		<< "Zombie destructor called ("
		<< this->get__name()
		<< ")"
		<< std::endl;
}
