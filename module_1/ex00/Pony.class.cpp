/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 03:34:29 by tharchen          #+#    #+#             */
/*   Updated: 2021/05/27 04:19:13 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Pony.class.hpp>

Pony::Pony(std::string name, std::string color, std::string type)
	: _name(name), _color(color), _type(type)
{
	std::cout << "HOURA ! " << name << " have been created !" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "GODNESS ! OUR PONY HAVE BEEN DESTROY !" << std::endl;
}

void	ponyOnTheStack(void)
{
	Pony	pony = Pony("Rainbow Dash", "rainbow", "Pegasus pony");

	std::cout << pony.get_name() << " enter the chat" << std::endl;
	std::cout << "Humm, hello.. there is no clouds today..." << std::endl;
	std::cout << "My name is " << pony.get_name() << std::endl;
	std::cout << "I am a(n)" << pony.get_type() << " :) " << std::endl;
	std::cout << "Humm yes, my skin is blue but my tail is " << pony.get_color() << " !" << std::endl;
	return ;
}

void	ponyOnTheHeap(void)
{
	Pony	*pony = new Pony("Pinkie Pie", "Pink", "Earth pony");

	std::cout << pony->get_name() << " enter the chat" << std::endl;
	std::cout << "Hey ! Hey ! Hey ! What a wonderfull day !!!" << std::endl;
	std::cout << "My name is " << pony->get_name()  << " !!!" << std::endl;
	std::cout << "I am a(n)" <<  pony->get_type() << " :) " << std::endl;
	std::cout << "Yes yes yes !! I\'m " << pony->get_color() << " ! i love this color" << std::endl;
	delete pony;
	return ;
}
