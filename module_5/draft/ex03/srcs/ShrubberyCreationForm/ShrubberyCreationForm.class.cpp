/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 13:23:56 by tharchen         ###   ########.fr       */
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
void	ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	std::string		filename = this->get__target() + "_shrubbery";
	std::ofstream	file(filename);

	if (file.fail())
		throw FileErrorException();
	Form::execute(bureaucrat);
	std::cout << "Creating " << filename << "." << std::endl;
	file << this->get__tree();
	file.close();
}

const char* ShrubberyCreationForm::FileErrorException::what() const throw()
{
	return C_G_RED"unable to write into file"C_RES;
}

/* ************************************************************************** */
/* ************************************************************************** */
