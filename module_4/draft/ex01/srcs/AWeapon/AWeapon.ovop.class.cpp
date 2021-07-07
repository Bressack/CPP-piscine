/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.ovop.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/06 13:16:51 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

AWeapon		&AWeapon::operator=(AWeapon const &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AWeapon const &i)
{
	o	<< "[ AWEAPON ] name: "
		<< i.get__name()
		<< ", ap_cost: "
		<< i.get__ap_cost()
		<< ", damage: "
		<< i.get__damage();
	return (o);
}
