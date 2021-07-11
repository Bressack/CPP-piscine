/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cd.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/10 16:50:44 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Bureaucrat::Bureaucrat(void)  // constructor
{

}

Bureaucrat::Bureaucrat(std::string name, int grade):  // constructor
_name(name)
{
	this->set__grade(grade);
	std::cout
		<< "[ " << __FUNCTION__ << " ]"
		<< " <" << this->get__name() << "> "
		<< "created with parametric constructor."
		<< std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)  // constructor by copy
{
	this->set__grade(src.get__grade());
	std::cout
		<< "[ " << __FUNCTION__ << " ]"
		<< " <" << this->get__name() << "> "
		<< "created by deep copy."
		<< std::endl;
}

Bureaucrat::~Bureaucrat(void) // destructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ]"
		<< " <" << this->get__name() << "> "
		<< "destroyed."
		<< std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{

}
