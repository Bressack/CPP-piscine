/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.ovop.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 21:22:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

A		&A::operator=(A const &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, A const &i)
{
	static_cast<void>(i);
	return (o);
}
