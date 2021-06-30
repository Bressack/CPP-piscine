/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:44:46 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/28 16:03:23 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>
#include <stdio.h>

typedef struct		s_filled
{
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email_address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
}					t_filled;

std::string		ft_toupper(std::string s)
{
	for (int i = 0; s[i]; i++)
		s[i] = std::toupper(s[i]);
	return (s);
}

bool			ft_is_number(const std::string& str)
{
	for (size_t i = 0; str[i]; i++)
		if (std::isdigit(str[i]) == 0)
			return (false);
	return (true);
}

int		ft_stoi(std::string str)
{
	std::istringstream		iss(str);
	int						n;

	iss >> n;
	return (n);
}

int				get_number_from_entry(int min, int max, std::string msg)
{
	std::string	tmp;
	int			n;

	std::cout << msg << ": ";
	while (1)
	{
		getline(std::cin, tmp);
		if (std::cin.eof() == true)
		{
			std::cout << "exit :)" << std::endl;
			throw (0);
		}
		if (!(tmp.length() == 0 || ft_is_number(tmp) == false))
		{
			n = ft_stoi(tmp);
			if ((max == min && n >= min) || (n >= min && n <= max))
				break ;
		}
		std::cout << "invalid entry: " << msg << ": ";
	}
	return (n);
}

void			search_in_phonebook(Contact *phonebook, int nb_contact)
{
	int			index;

	if (!nb_contact)
	{
		std::cerr << "error: phonebook is empty, please feed it." << std::endl;
		return ;
	}
	Contact::print_column_names();
	for (int i = 0; i < SIZE_PHONEBOOK && i < nb_contact; i++)
		phonebook[i].print_short_contact();
	index = get_number_from_entry(0, SIZE_PHONEBOOK - 1, "enter index of contact");
	phonebook[index].print_full_contact();
}

void			autofill(Contact *phonebook, int *nb_contact)
{
	int			count;

	count = get_number_from_entry(0, SIZE_PHONEBOOK - 1, "How many autofilled contact(s) do you want ?");
	for (int i = 0; i < count; i++)
	{
		phonebook[i % SIZE_PHONEBOOK].set_index((*nb_contact) % SIZE_PHONEBOOK);
		phonebook[i % SIZE_PHONEBOOK].set_first_name(g_exemple[i % 10].first_name);
		phonebook[i % SIZE_PHONEBOOK].set_last_name(g_exemple[i % 10].last_name);
		phonebook[i % SIZE_PHONEBOOK].set_nickname(g_exemple[i % 10].nickname);
		phonebook[i % SIZE_PHONEBOOK].set_login(g_exemple[i % 10].login);
		phonebook[i % SIZE_PHONEBOOK].set_postal_address(g_exemple[i % 10].postal_address);
		phonebook[i % SIZE_PHONEBOOK].set_email_address(g_exemple[i % 10].email_address);
		phonebook[i % SIZE_PHONEBOOK].set_phone_number(g_exemple[i % 10].phone_number);
		phonebook[i % SIZE_PHONEBOOK].set_birthday_date(g_exemple[i % 10].birthday_date);
		phonebook[i % SIZE_PHONEBOOK].set_favorite_meal(g_exemple[i % 10].favorite_meal);
		phonebook[i % SIZE_PHONEBOOK].set_underwear_color(g_exemple[i % 10].underwear_color);
		phonebook[i % SIZE_PHONEBOOK].set_darkest_secret(g_exemple[i % 10].darkest_secret);
		(*nb_contact)++;
	}
	return ;
}

int				main(void)
{
	std::string	cmd;
	int			nb_contact;
	Contact		phonebook[SIZE_PHONEBOOK];

	nb_contact = 0;
	std::cout << "80\' contacts manager" << std::endl;
	try
	{
		while (1)
		{
			std::cout << ">: ";
			getline(std::cin, cmd);
			if (std::cin.eof() == true)
			{
				std::cout << "exit :)" << std::endl;
				throw (0);
			}
			if (cmd.length() == 0)
				continue ;
			else if (ft_toupper(cmd) == "AUTOFILL")
				autofill(phonebook, &nb_contact);
			else if (ft_toupper(cmd) == "ADD")
			{
				if (nb_contact > SIZE_PHONEBOOK)
					std::cout << "warning: phonebook full ! the oldest contact will be replaced. (index " << nb_contact % SIZE_PHONEBOOK << ")" << std::endl;
				new_contact(phonebook, &nb_contact);
			}
			else if (ft_toupper(cmd) == "SEARCH")
				search_in_phonebook(phonebook, nb_contact);
			else if (ft_toupper(cmd) == "EXIT")
				return (0);
			else
			{
				std::cerr << "error: invalid command \'" << cmd << "\'" << std::endl;
				std::cerr << "allowed commands are: AUTOFILL, ADD, SEARCH and EXIT" << std::endl;
			}
		}
	}
	catch (int e)
	{
		return (e);
	}
	return (0);
}

