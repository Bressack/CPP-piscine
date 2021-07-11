/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 15:13:19 by tharchen         ###   ########.fr       */
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
const char* Form::GradeTooHighException::what() const throw()
{
	return (C_G_RED"grade too high"C_RES);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (C_G_RED"grade too low"C_RES);
}

const char* Form::NotSignedException::what() const throw()
{
	return (C_G_RED"form not signed"C_RES);
}

void Form::execute(const Bureaucrat &executor) const
{
	if (this->get__issigned() == false)
		throw Form::NotSignedException();
	if (executor.get__grade() > this->get__gradetoexecute())
		throw Form::GradeTooLowException();
	std::cout
		<< executor.get__name()
		<< " execute "
		<< this->get__name()
		<< "."
		<< std::endl;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.get__grade() > this->get__gradetosigne())
		throw Form::GradeTooLowException();
	std::cout
		<< bureaucrat.get__name()
		<< " signs "
		<< this->get__name()
		<< "."
		<< std::endl;
	this->set__issigned(true);
}
/* ************************************************************************** */
/* ************************************************************************** */
