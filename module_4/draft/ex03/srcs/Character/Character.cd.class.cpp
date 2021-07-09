/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cd.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 20:53:19 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Character::Character(void)  // constructor
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout
		<< __FUNCTION__
		<< " basic constructor called !"
		<< std::endl;
}

Character::Character(std::string name)  // constructor
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout
		<< __FUNCTION__
		<< " parameter constructor called !"
		<< std::endl;
}

Character::Character(Character const &src)  // constructor by copy
{
	this->_name = src.get__name();
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src.get__inventory_cell(i);
	std::cout
		<< __FUNCTION__
		<< " copy constructor called !"
		<< std::endl;
}

Character::~Character(void) // destructor
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout
		<< &(__FUNCTION__[1])
		<< " destructor called !"
		<< std::endl;
}
