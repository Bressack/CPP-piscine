/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cd.class.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 11:53:53 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

PresidentialPardonForm::PresidentialPardonForm(void) // constructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created with basic constructor."
		<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): // constructor
Form("PresidentialPardonForm", 25, 5),
_target(target)
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created with parametric constructor."
		<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : // constructor by copy
Form(src.get__name(), src.get__gradetosigne(), src.get__gradetoexecute()),
_target(src.get__target())
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created by deep copy."
		<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) // destructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "destroyed."
		<< std::endl;
}
