/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.gs.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 19:22:40 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _name

std::string	const & Character::get__name(void) const
{
	return (this->_name);
}

////////////////////////////////////////////////////////////////////////////////

//// private _inventory

AMateria	*Character::get__inventory_cell(int index) const
{
	if (index >= 0 && index <= 3)
		return (this->_inventory[index]);
	return (NULL);
}

////////////////////////////////////////////////////////////////////////////////