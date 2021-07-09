/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cd.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 15:29:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

WrongAnimal::WrongAnimal(void)  // constructor
{
	std::cout << "WrongAnimal created !" << std::endl;
	this->set__type("WrongAnimal");
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)  // constructor by copy
{
	std::cout << "WrongAnimal created by copy !" << std::endl;
	this->set__type(src.get__type());
}

WrongAnimal::~WrongAnimal(void) // destructor
{
	std::cout << "WrongAnimal destroyed !" << std::endl;
}
