/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 15:54:35 by tharchen         ###   ########.fr       */
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
void	Phonebook::exit(void)
{
	throw (1); // exit
}

void	Phonebook::search(void)
{
	int	choosen;

	if (this->nb_entry == 0)
		std::cerr << "empty phonebook, please feed it" << std::endl;
	else
	{
		Contact::print_column_names();
		for (size_t i = 0; i < this->nb_entry && i < SIZE_PHONEBOOK; i++)
			this->_contacts[i].print_short(i);
		choosen = get_number_from_entry(0, min((int)this->nb_entry, (int)SIZE_PHONEBOOK) - 1, "enter index");
		this->_contacts[choosen].print();
	}
}

void	Phonebook::autofill(void)
{
	for (size_t i = 0; i < SIZE_PHONEBOOK; i++)
		this->_contacts[i] = Contact(this->_exemple[i % 10]);
	this->nb_entry += SIZE_PHONEBOOK;
}

void	Phonebook::add(void)
{
	Contact		new_contact(
		get_cmd_from_cin("First name     : "),
		get_cmd_from_cin("Last name      : "),
		get_cmd_from_cin("Nickname       : "),
		get_cmd_from_cin("Phone Number   : "),
		get_cmd_from_cin("Darkest Secret : ")
	);
	this->_contacts[this->nb_entry % SIZE_PHONEBOOK] = new_contact;
	this->nb_entry++;
}

void	Phonebook::run_cmd(std::string cmd)
{
	if (ft_toupper(cmd) == "ADD")
		this->add();
	else if (ft_toupper(cmd) == "AUTOFILL")
		this->autofill();
	else if (ft_toupper(cmd) == "SEARCH")
		this->search();
	else if (ft_toupper(cmd) == "EXIT")
		this->exit();
	else
		throw (2);
}


/* ************************************************************************** */
/* ************************************************************************** */
