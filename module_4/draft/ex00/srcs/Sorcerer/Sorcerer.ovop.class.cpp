/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.ovop.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 16:27:26 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Sorcerer		&Sorcerer::operator=(Sorcerer const &rhs)
{
	this->set__name(rhs.get__name());
	this->set__title(rhs.get__title());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &i)
{
	o	<< "Dear mortals ! I am "
		<< i.get__name()
		<< ", "
		<< i.get__title()
		<< " ! I love ponies !!";
	return (o);
}
