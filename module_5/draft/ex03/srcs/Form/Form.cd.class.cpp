/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cd.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 15:09:05 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Form::Form(void):  // constructor
_name(""),
_gradetosigne(150),
_gradetoexecute(150),
_issigned(false)
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created with basic constructor."
		<< std::endl;
}

Form::Form(std::string name, int gradetosigne, int gradetoexecute):  // constructor
_name(name),
_gradetosigne(gradetosigne),
_gradetoexecute(gradetoexecute),
_issigned(false)
{
	if (gradetosigne < 1
	|| gradetoexecute < 1)
		throw Form::GradeTooHighException();
	if (gradetosigne > 150
	|| gradetoexecute > 150)
		throw Form::GradeTooLowException();
	std::cout
		<< "[ " << __FUNCTION__ << " ]"
		<< " <" << this->get__name() << "> "
		<< "created with parametric constructor."
		<< std::endl;
}

Form::Form(Form const &src):  // constructor by copy
_name(src.get__name()),
_gradetosigne(src.get__gradetosigne()),
_gradetoexecute(src.get__gradetoexecute()),
_issigned(src.get__issigned())
{
	std::cout
		<< "[ " << __FUNCTION__ << " ]"
		<< " <" << this->get__name() << "> "
		<< "created by deep copy."
		<< std::endl;
}

Form::~Form(void) // destructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ]"
		<< " <" << this->get__name() << "> "
		<< "destroyed."
		<< std::endl;
}

Form::GradeTooLowException::GradeTooLowException(void)
{

}

Form::GradeTooHighException::GradeTooHighException(void)
{

}

Form::NotSignedException::NotSignedException(void)
{

}
