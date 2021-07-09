/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 21:10:27 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

// PROTECTED MEMBERS FUNCTION : PROMF

/* ************************************************************************** */
/* ************************************************************************** */

// PRIVATE MEMBERS FUNCTION : PRIMF

/* ************************************************************************** */
/* ************************************************************************** */

// PUBLIC MEMBERS FUNCTION : PUMF
void 			MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m; // storage full
}

AMateria* 		MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			if (this->_inventory[i]->get__type() == type)
				return (this->_inventory[i]->clone());
		}
	}
	return (NULL);
}

/* ************************************************************************** */
/* ************************************************************************** */
