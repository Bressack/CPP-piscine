/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:31:52 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/16 14:18:00 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	ZombieHorde		*horde;

	std::cout << C_G_GRAY << "Creating a horde of " << C_G_CYAN << "-42" << C_G_GRAY << " zombies" << C_RES << std::endl;
	horde = new ZombieHorde(-42);
	horde->announce();
	delete horde;

	std::cout << C_G_GRAY << "Creating a horde of " << C_G_CYAN << "0" << C_G_GRAY << " zombies" << C_RES << std::endl;
	horde = new ZombieHorde(0);
	horde->announce();
	delete horde;

	std::cout << C_G_GRAY << "Creating a horde of " << C_G_CYAN << "5" << C_G_GRAY << " zombies" << C_RES << std::endl;
	horde = new ZombieHorde(5);
	horde->announce();
	delete horde;

	std::cout << C_G_GRAY << "Creating a horde of " << C_G_CYAN << "10" << C_G_GRAY << " zombies" << C_RES << std::endl;
	horde = new ZombieHorde(10);
	horde->announce();
	delete horde;

	std::cout << C_G_GRAY << "Creating a horde of " << C_G_CYAN << "42" << C_G_GRAY << " zombies" << C_RES << std::endl;
	horde = new ZombieHorde(42);
	horde->announce();
	delete horde;

	return (0);
}
