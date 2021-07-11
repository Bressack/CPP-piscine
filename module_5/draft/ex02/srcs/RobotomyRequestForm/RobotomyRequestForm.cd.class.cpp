/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cd.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 12:31:31 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

RobotomyRequestForm::RobotomyRequestForm(void) // constructor
{
	srand(time(NULL));
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created with basic constructor."
		<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): // constructor
Form("RobotomyRequestForm", 72, 45),
_target(target)
{
	srand(time(NULL));
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created with parametric constructor."
		<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : // constructor by copy
Form(src.get__name(), src.get__gradetosigne(), src.get__gradetoexecute()),
_target(src.get__target())
{
	srand(time(NULL));
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created by deep copy."
		<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) // destructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "destroyed."
		<< std::endl;
}
