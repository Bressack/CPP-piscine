/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cd.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 16:12:40 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Peon::Peon(void)  // constructor
{

}

Peon::Peon(std::string name)  // constructor
{
	this->set__name(name);
	std::cout
		<< this->get__name()
		<< " is born and say: Zog zog."
		<< std::endl;
}

Peon::Peon(Peon const &src)  // constructor by copy
{
	this->set__name(src.get__name());
}

Peon::~Peon(void) // destructor
{
	std::cout
		<< this->get__name()
		<< " is dead and say: Bleuark..."
		<< std::endl;
}
