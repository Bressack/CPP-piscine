/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cd.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 14:37:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Dog::Dog(void)  // constructor
{
	std::cout << "Dog created !" << std::endl;
	this->set__type("Dog");
}

Dog::Dog(Dog const &src)  // constructor by copy
{
	std::cout << "Dog created by copy !" << std::endl;
	this->set__type(src.get__type());
}

Dog::~Dog(void) // destructor
{
	std::cout << "Dog destroyed !" << std::endl;
}
