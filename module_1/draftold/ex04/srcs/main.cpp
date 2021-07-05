/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 19:48:54 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club); // ref

		bob.attack();
		club.set__type("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim"); // ptr

		jim.set__weapon(club);
		jim.attack();
		club.set__type("some other type of club");
		jim.attack();
	}
	return (0);
}
