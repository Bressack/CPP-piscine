/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 18:49:30 by tharchen         ###   ########.fr       */
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
	// subject test Sorcerer constructor/destructor displays
	diamond_title_print("caca");
	diamond_title_print("subject test Sorcerer constructor/destructor displays");
	{
		Sorcerer	s1("Hubert", "Bonisseur de la batte");

		std::cout << s1 << std::endl;
	}
	std::cout << std::endl;
	// subject test Victim constructor/destructor displays
	diamond_title_print("subject test Victim constructor/destructor displays");
	{
		Victim		v1("Julie");

		std::cout << v1 << std::endl;
	}
	return (0);
}
