/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:15:32 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/28 17:04:38 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>

Contact::Contact(void)
{
	// std::cout << "constructor called" << std::endl;
	return ;
}
Contact::~Contact(void)
{
	// std::cout << "destructor called" << std::endl;
	return ;
}

void			Contact::print_column_names(void)
{
	std::cout << std::setfill(' ') << std::setw(10) << "index" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "first name" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "last name" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "login" << " | ";
	std::cout << std::endl;
}

std::string		cutten(std::string & s)
{
	std::string ret(s);

	if (s.length() > 10)
	{
		ret[9] = '.';
		ret[10] = '\0';
	}
	else
		return (s);
}

void			Contact::print_short_contact(void) const
{
	std::cout << std::setfill(' ') << std::setw(10) << this->cutten(get_index()) << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << this->cutten(get_first_name()) << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << this->cutten(get_last_name()) << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << this->cutten(get_login()) << " | ";
	std::cout << std::endl;
}

void			Contact::print_full_contact(void) const
{
	std::cout << "First name      :" << this->get_first_name() << std::endl;
	std::cout << "Last name       :" << this->get_last_name() << std::endl;
	std::cout << "Nickname        :" << this->get_nickname() << std::endl;
	std::cout << "Login           :" << this->get_login() << std::endl;
	std::cout << "Postal Address  :" << this->get_postal_address() << std::endl;
	std::cout << "Email Address   :" << this->get_email_address() << std::endl;
	std::cout << "Phone Number    :" << this->get_phone_number() << std::endl;
	std::cout << "Birthday Date   :" << this->get_birthday_date() << std::endl;
	std::cout << "Favorite Meal   :" << this->get_favorite_meal() << std::endl;
	std::cout << "Underwear Color :" << this->get_underwear_color() << std::endl;
	std::cout << "Darkest Secret  :" << this->get_darkest_secret() << std::endl;
}
