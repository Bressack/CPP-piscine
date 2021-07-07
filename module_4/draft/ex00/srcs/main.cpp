/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/06 13:01:28 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void	diamond_title_print(std::string msg)
{
	std::cout
		<< " //////////////////////////  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
		<< std::endl
		<< "||//                     /    \\                        \\\\||"
		<< std::endl
		<< "|| "
		<< msg
		<<" ||"
		<< std::endl
		<< "||\\\\                     \\    /                        //||"
		<< std::endl
		<< " \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\  /////////////////////////////"
		<< std::endl;
}

int		main(void)
{
	// subject tests
	diamond_title_print("                   subject tests                     ");
	{
		Sorcerer	robert("Robert", "the Magnificent");
		Victim		jim("Jimmy");
		Peon		joe("Joe");

		std::cout << robert << std::endl;
		std::cout << jim << std::endl;
		std::cout << joe << std::endl;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	// subject test Sorcerer constructor/destructor displays
	diamond_title_print("subject test Sorcerer constructor/destructor displays");
	{
		Sorcerer	s1("Hubert", "Bonisseur de la batte");

		std::cout << s1 << std::endl;
	}
	std::cout << std::endl << std::endl;
	// subject test Victim constructor/destructor displays
	diamond_title_print("subject test Victim constructor/destructor displays  ");
	{
		Victim		v1("Julie");

		std::cout << v1 << std::endl;
	}
	std::cout << std::endl << std::endl;
	diamond_title_print("  subject test Sorcerer polymorph Victim displays    ");
	{
		Sorcerer	s1("Hubert", "Bonisseur de la batte");
		Victim		v1("Julie");

		s1.polymorph(v1);
	}

	return (0);
}
