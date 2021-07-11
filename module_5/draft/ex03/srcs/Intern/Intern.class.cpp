/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 14:48:50 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

struct s_concrets_forms	concrets_forms_list[CONCRETS_FORMS_COUNT] =
{
	{ PRESIDENTIAL , "ShrubberyCreationForm"  },
	{ ROBOTOMY     , "RobotomyRequestForm"    },
	{ SHRUBERRY    , "PresidentialPardonForm" }
};

// PROTECTED MEMBERS FUNCTION : PROMF

/* ************************************************************************** */
/* ************************************************************************** */

// PRIVATE MEMBERS FUNCTION : PRIMF

/* ************************************************************************** */
/* ************************************************************************** */

// PUBLIC MEMBERS FUNCTION : PUMF

const char	*Intern::InvalidFormNameException::what() const throw()
{
	return (C_G_RED"Form name unknown"C_RES);
}

static enum e_concrets_forms_id select_concrets_forms(std::string form_name)
{
	for (int i = 0; i < CONCRETS_FORMS_COUNT; i++)
	{
		if (form_name == concrets_forms_list[i].name)
			return (concrets_forms_list[i].id);
	}
	throw Intern::InvalidFormNameException();
}

Form	*Intern::makeForm(std::string form_name, std::string target)
{
	enum e_concrets_forms_id		form_id;

	try
	{
		form_id = select_concrets_forms(form_name);
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
		return (NULL);
	}
	switch (form_id)
	{
		case PRESIDENTIAL:
			return (new PresidentialPardonForm(target));
		case ROBOTOMY:
			return (new RobotomyRequestForm(target));
		case SHRUBERRY:
			return (new ShrubberyCreationForm(target));
		default: break ;
	}
	return (NULL);
}

/* ************************************************************************** */
/* ************************************************************************** */
