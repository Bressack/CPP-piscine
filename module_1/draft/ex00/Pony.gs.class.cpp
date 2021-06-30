/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.gs.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 03:54:29 by tharchen          #+#    #+#             */
/*   Updated: 2021/05/27 04:15:43 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Pony.class.hpp>

// gs Pony::_name
std::string		Pony::get_name(void) const
{
	return (this->_name);
}

void			Pony::set_name(std::string val)
{
	if (val.length() && val.length() < 1024)
		this->_name = val;
}

// gs Pony::_color
std::string		Pony::get_color(void) const
{
	return (this->_color);
}

void			Pony::set_color(std::string val)
{
	if (val.length() && val.length() < 1024)
		this->_color = val;
}

// gs Pony::_type
std::string		Pony::get_type(void) const
{
	return (this->_type);
}

void			Pony::set_type(std::string val)
{
	if (val.length() && val.length() < 1024)
		this->_type = val;
}
