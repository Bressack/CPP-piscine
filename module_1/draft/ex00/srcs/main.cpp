/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 10:57:20 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void	randomChump(std::string name)
{
	Zombie	zombiestack(name);

	zombiestack.announce();
}

Zombie	*newZombie(std::string name)
{
	Zombie	*new_zombie = new Zombie(name);

	return (new_zombie);
}

int		main(void)
{
	std::cout << "Zombie on the heap with name" << std::endl;
	{
		Zombie		*z1 = newZombie("patrick");

		z1->announce();
		delete z1;
	}
	std::cout << std::endl << "Zombie on the heap without name" << std::endl;
	{
		Zombie		*z1 = newZombie("");

		z1->announce();
		delete z1;
	}
	std::cout << std::endl << "Zombie on the stack with name" << std::endl;
	{
		randomChump("Deny");
	}
	std::cout << std::endl << "Zombie on the stack without name" << std::endl;
	{
		randomChump("");
	}
	return (0);
}
