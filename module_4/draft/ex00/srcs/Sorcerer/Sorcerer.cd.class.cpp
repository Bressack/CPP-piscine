/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cd.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 17:16:58 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Sorcerer::Sorcerer(void)  // constructor
{
	std::cout << "nope !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title):  // constructor
_name(name),
_title(title)
{
	std::cout
		<< this->get__name()
		<< ", "
		<< this->get__title()
		<< " is born !"
		<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)  // constructor by copy
{
	this->set__name(src.get__name());
	this->set__title(src.get__title());
}

Sorcerer::~Sorcerer(void) // destructor
{
	std::cout
		<< this->get__name()
		<< ", "
		<< this->get__title()
		<< " is dead. Consequences will never be the same!"
		<< std::endl;
}
