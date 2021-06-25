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

//// private _first_name

std::string					Contact::get__first_name(void) const
{
	return (this->_first_name);
}

void					Contact::set__first_name(std::string _first_name)
{
	this->_first_name = _first_name;
}

////////////////////////////////////////////////////////////////////////////////


//// private _last_name

std::string					Contact::get__last_name(void) const
{
	return (this->_last_name);
}

void					Contact::set__last_name(std::string _last_name)
{
	this->_last_name = _last_name;
}

////////////////////////////////////////////////////////////////////////////////


//// private _last_name2

std::string					Contact::get__last_name2(void) const
{
	return (this->_last_name2);
}

void					Contact::set__last_name2(std::string _last_name2)
{
	this->_last_name2 = _last_name2;
}

////////////////////////////////////////////////////////////////////////////////


//// private _surname

std::string					**Contact::get__surname(void) const
{
	return (this->_surname);
}

void					Contact::set__surname(std::string **_surname)
{
	this->_surname = _surname;
}

////////////////////////////////////////////////////////////////////////////////


//// private _phonenumber

int							Contact::get__phonenumber(void) const
{
	return (this->_phonenumber);
}

void							Contact::set__phonenumber(int _phonenumber)
{
	this->_phonenumber = _phonenumber;
}

////////////////////////////////////////////////////////////////////////////////

