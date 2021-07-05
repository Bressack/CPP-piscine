/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cd.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 17:17:00 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Victim::Victim(void)  // constructor
{

}

Victim::Victim(std::string name):  // constructor
_name(name)
{
	std::cout
		<< "Some random victim called "
		<< this->get__name()
		<< " just appeared!"
		<< std::endl;
}

Victim::Victim(Victim const &src)  // constructor by copy
{
	this->set__name(src.get__name());
}

Victim::~Victim(void) // destructor
{
	std::cout
		<< "Victim "
		<< this->get__name()
		<< " just died for no apparent reason!"
		<< std::endl;
}
