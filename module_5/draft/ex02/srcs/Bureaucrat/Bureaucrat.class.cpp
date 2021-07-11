/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 13:25:09 by tharchen         ###   ########.fr       */
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
void 	Bureaucrat::incrementGrade(void)
{
	this->set__grade(this->get__grade() - 1);
}

void 	Bureaucrat::decrementGrade(void)
{
	this->set__grade(this->get__grade() + 1);
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(std::exception &e)
	{
		std::cout
			<< C_G_RED
			<< "error: "
			<< C_G_WHITE
			<< this->get__name()
			<< " can't sign "
			<< form.get__name()
			<< ": "
			<< e.what()
			<< C_RES
			<< std::endl;
	}
}

void Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch(std::exception &e)
	{
		std::cout
			<< C_G_RED
			<< "error: "
			<< C_G_WHITE
			<< this->get__name()
			<< " can't execute "
			<< form.get__name()
			<< ": "
			<< e.what()
			<< C_RES
			<< std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return C_G_RED"grade too high"C_RES;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return C_G_RED"grade too low"C_RES;
}
/* ************************************************************************** */
/* ************************************************************************** */
