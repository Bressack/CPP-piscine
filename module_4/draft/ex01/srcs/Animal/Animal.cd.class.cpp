/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cd.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 15:28:03 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Animal::Animal(void)  // constructor
{
	std::cout << "Animal created !" << std::endl;
	this->set__type("Animal");
}

Animal::Animal(Animal const &src)  // constructor by copy
{
	std::cout << "Animal created by copy !" << std::endl;
	this->set__type(src.get__type());
}

Animal::~Animal(void) // destructor
{
	std::cout << "Animal destroyed !" << std::endl;
}
