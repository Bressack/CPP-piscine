/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.ovop.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/10 10:36:47 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->set__grade(rhs.get__grade());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i)
{
	o	<< "<" << i.get__name() << ">"
		<< " {" << i.get__grade() << "}";
	return (o);
}
