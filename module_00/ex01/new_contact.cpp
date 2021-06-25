/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:56:20 by tharchen          #+#    #+#             */
/*   Updated: 2021/05/26 22:27:35 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>

void			new_contact(Contact *phonebook, int *nb_contact)
{
	Contact		new_contact;
	std::string	tmp;

	while (1)
	{
		std::cout << "First name       : ";
		getline(std::cin, tmp);
		if (new_contact.set_first_name(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Last name        : ";
		getline(std::cin, tmp);
		if (new_contact.set_last_name(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Nickname         : ";
		getline(std::cin, tmp);
		if (new_contact.set_nickname(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Login            : ";
		getline(std::cin, tmp);
		if (new_contact.set_login(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Postal Address   : ";
		getline(std::cin, tmp);
		if (new_contact.set_postal_address(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Email Address    : ";
		getline(std::cin, tmp);
		if (new_contact.set_email_address(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Phone Number     : ";
		getline(std::cin, tmp);
		if (new_contact.set_phone_number(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Birthday Date    : ";
		getline(std::cin, tmp);
		if (new_contact.set_birthday_date(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Favorite Meal    : ";
		getline(std::cin, tmp);
		if (new_contact.set_favorite_meal(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Underwear Color  : ";
		getline(std::cin, tmp);
		if (new_contact.set_underwear_color(tmp) == true)
			break ;
	}
	while (1)
	{
		std::cout << "Darkest Secret   : ";
		getline(std::cin, tmp);
		if (new_contact.set_darkest_secret(tmp) == true)
			break ;
	}
	new_contact.set_index((*nb_contact) % SIZE_PHONEBOOK);
	phonebook[new_contact.get_index()] = new_contact;
	(*nb_contact)++;
	return ;
}
