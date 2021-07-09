/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cd.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 16:32:37 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Dog::Dog(void)  // constructor
{
	this->set__type("Dog");
	this->_brain = new Brain();
	std::cout << "Dog created !" << std::endl;
}

Dog::Dog(Dog const &src)  // constructor by copy
{
	this->set__type(src.get__type());
	this->_brain = new Brain(src.get__brain());
	std::cout << "Dog created by copy !" << std::endl;
}

Dog::~Dog(void) // destructor
{
	delete this->_brain;
	std::cout << "Dog destroyed !" << std::endl;
}
