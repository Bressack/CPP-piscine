/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cd.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 15:10:35 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Contact::Contact(void)  // constructor
{

}

Contact::Contact(
	std::string first_name,
	std::string last_name,
	std::string nickname,
	std::string phone_number,
	std::string darkest_secret):
	_first_name(first_name),
	_last_name(last_name),
	_nickname(nickname),
	_phone_number(phone_number),
	_darkest_secret(darkest_secret)
{
	// this->_darkest_secret = darkest_secret;
	// this->_phone_number = phone_number;
	// this->_nickname = nickname;
	// this->_last_name = last_name;
	// this->_first_name = first_name;
}

Contact::Contact(Contact const &src)  // constructor by copy
{
	*this = src;
}

Contact::~Contact(void) // destructor
{

}
