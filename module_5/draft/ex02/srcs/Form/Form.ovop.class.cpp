/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.ovop.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/10 16:06:55 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Form		&Form::operator=(Form const &rhs)
{
	this->set__issigned(rhs.get__issigned());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form const &i)
{
	o	<< "( [ FORM ] "
		<< "<" << i.get__name() << "> "
		<< "{ signe grade: 1 - " << i.get__gradetosigne() << " } "
		<< "{ execute grade: 1 - " << i.get__gradetoexecute() << " } )";
	return (o);
}
