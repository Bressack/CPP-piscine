/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.gs.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/28 15:57:18 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _first_name,

std::string	Contact::get__first_name(void) const
{
	return (this->_first_name);
}

void	Contact::set__first_name(std::string _first_name)
{
	this->_first_name = _first_name;
}

////////////////////////////////////////////////////////////////////////////////


//// private _last_name,

std::string	Contact::get__last_name(void) const
{
	return (this->_last_name);
}

void	Contact::set__last_name(std::string _last_name)
{
	this->_last_name = _last_name;
}

////////////////////////////////////////////////////////////////////////////////


//// private _nickname,

std::string	Contact::get__nickname(void) const
{
	return (this->_nickname);
}

void	Contact::set__nickname(std::string _nickname)
{
	this->_nickname = _nickname;
}

////////////////////////////////////////////////////////////////////////////////


//// private _phone_number

std::string	Contact::get__phone_number(void) const
{
	return (this->_phone_number);
}

void	Contact::set__phone_number(std::string _phone_number)
{
	this->_phone_number = _phone_number;
}

////////////////////////////////////////////////////////////////////////////////


//// private _darkest_secret

std::string	Contact::get__darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contact::set__darkest_secret(std::string _darkest_secret)
{
	this->_darkest_secret = _darkest_secret;
}

////////////////////////////////////////////////////////////////////////////////

