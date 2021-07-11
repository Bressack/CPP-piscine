/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.ovop.class.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 12:31:16 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->set__target(rhs.get__target());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
	o	<< "( [ FORM ] "
		<< "<" << i.get__name() << "> "
		<< "{ signe grade: 1 - " << i.get__gradetosigne() << " } "
		<< "{ execute grade: 1 - " << i.get__gradetoexecute() << " } "
		<< "{ target: " << i.get__target() << " } )";
	return (o);
}

