/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.ovop.class.cpp               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 13:02:40 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->set__target(rhs.get__target());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
	o	<< "( [ FORM ] "
		<< "<" << i.get__name() << "> "
		<< "{ signe grade: 1 - " << i.get__gradetosigne() << " } "
		<< "{ execute grade: 1 - " << i.get__gradetoexecute() << " } "
		<< "{ target: " << i.get__target() << " } )";
	return (o);
}
