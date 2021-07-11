/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.ovop.class.cpp              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 11:53:57 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->set__target(rhs.get__target());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
	o	<< "( [ FORM ] "
		<< "<" << i.get__name() << "> "
		<< "{ signe grade: 1 - " << i.get__gradetosigne() << " } "
		<< "{ execute grade: 1 - " << i.get__gradetoexecute() << " } "
		<< "{ target: " << i.get__target() << " } )";
	return (o);
}
