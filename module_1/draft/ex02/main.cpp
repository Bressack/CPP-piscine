/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 13:29:59 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/25 14:58:12 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	ZombieEvent		type;

	int				nb_zomzom;
	Zombie			**Zombies;

	srand(time(NULL));

	// CREATION GROUP 1 ***********************************************************
	nb_zomzom = ut::get_number_from_entry(0, 0, "How many zombies do you want ?");
	std::cout << "New group of Zombies !" << std::endl;
	Zombies = new Zombie*[nb_zomzom];
	for(int i = 0; i < nb_zomzom; ++i)
	{
		type.setZombieType(ZombieEvent::gentype());
		Zombies[i] = type.randomChump();
	}
	// ****************************************************************************

	// DESTRUCTION GROUP 1 ***********************************************************
	for(int i = 0; i < nb_zomzom; ++i)
	{
		std::cout << "Delete " << Zombies[i]->get_name() << std::endl;
		delete Zombies[i];
	}
	delete[] Zombies;
	// ****************************************************************************

	return (0);
}
