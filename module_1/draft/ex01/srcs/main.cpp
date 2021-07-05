/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 11:52:41 by tharchen         ###   ########.fr       */
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

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		horde[i].set__name(name);
	}

	return (horde);
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
	std::cout << "Zombie Horde on the heap with fixed name" << std::endl;
	{
		Zombie *zh = zombieHorde(50, "Danielle");

		for (size_t i = 0; i < 50; i++)
		{
			zh[i].announce();
		}
		delete[] zh;
	}
	while (1);
	return (0);
}
