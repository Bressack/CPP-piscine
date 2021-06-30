/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 15:16:01 by tharchen         ###   ########.fr       */
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

void	Contact::print(void) const
{
	std::cout << "First name      : " << this->get__first_name() << std::endl;
	std::cout << "Last name       : " << this->get__last_name() << std::endl;
	std::cout << "Nickname        : " << this->get__nickname() << std::endl;
	std::cout << "Phone Number    : " << this->get__phone_number() << std::endl;
	std::cout << "Darkest Secret  : " << this->get__darkest_secret() << std::endl;
}

void		Contact::print_column_names(void)
{
	std::cout << std::setfill(' ') << std::setw(10) << "index" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "first name" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "last name" << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << "nickname" << " | ";
	std::cout << std::endl;
}

static std::string	cutten(std::string s)
{
	std::string ret;

	ret = s.substr(0, 10);
	if (s.length() > 10)
		ret[9] = '.';
	return (ret);
}

void	Contact::print_short(int id) const
{
	std::cout << std::setfill(' ') << std::setw(10) << id << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << cutten(this->get__first_name()) << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << cutten(this->get__last_name()) << " | ";
	std::cout << std::setfill(' ') << std::setw(10) << cutten(this->get__nickname()) << " | ";
	std::cout << std::endl;
}

/* ************************************************************************** */
/* ************************************************************************** */
