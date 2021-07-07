/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.ovop.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 16:16:33 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Peon		&Peon::operator=(Peon const &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Peon const &i)
{
	o	<< "I'm "
		<< i.get__name()
		<< " and I like otters!";
	return (o);
}
