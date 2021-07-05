/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern_gs.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/18 13:28:46 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _name

std::string	Sorcerer::get__name(void) const
{
	return (this->_name);
}

void	Sorcerer::set__name(std::string _name)
{
	this->_name = _name;
}

////////////////////////////////////////////////////////////////////////////////


//// private _title

std::string	Sorcerer::get__title(void) const
{
	return (this->_title);
}

void	Sorcerer::set__title(std::string _title)
{
	this->_title = _title;
}

////////////////////////////////////////////////////////////////////////////////

