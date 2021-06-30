/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:27:56 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/16 14:18:17 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

ZombieHorde::ZombieHorde(int n): _zombies_count(n)
{
	if (n > 0)
	{
		std::cout << "Construction of a ZombieHorde" << std::endl;
		this->_zombies = new Zombie[this->_zombies_count];
	}
	else
		std::cerr << "Not enough zombies !" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	if (this->_zombies_count > 0)
	{
		std::cout << "Destruction of a ZombieHorde" << std::endl;
		delete[] this->_zombies;
	}
}

void			ZombieHorde::announce(void) const
{
	std::cout << "The horde is talking !" << std::endl;
	for (int i = 0; i < this->_zombies_count; i++)
		this->_zombies[i].announce();
	return ;
}
