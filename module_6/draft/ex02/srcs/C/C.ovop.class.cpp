/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.ovop.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 21:26:37 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

C		&C::operator=(C const &rhs)
{
	static_cast<void>(rhs);
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, C const &i)
{
	static_cast<void>(i);
	return (o);
}
