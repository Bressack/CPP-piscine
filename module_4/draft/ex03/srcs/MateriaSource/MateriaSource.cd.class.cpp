/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cd.class.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 20:43:12 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

MateriaSource::MateriaSource(void)  // constructor
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout
		<< __FUNCTION__
		<< " basic constructor called !"
		<< std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)  // constructor by copy
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src.get__inventory_cell(i);
	std::cout
		<< __FUNCTION__
		<< " copy constructor called !"
		<< std::endl;
}

MateriaSource::~MateriaSource(void) // destructor
{
	std::cout
		<< &(__FUNCTION__[1])
		<< " destructor called !"
		<< std::endl;
}
