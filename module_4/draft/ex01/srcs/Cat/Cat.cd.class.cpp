/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cd.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 16:32:48 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Cat::Cat(void)  // constructor
{
	this->set__type("Cat");
	this->_brain = new Brain();
	std::cout << "Cat created !" << std::endl;
}

Cat::Cat(Cat const &src)  // constructor by copy
{
	this->set__type(src.get__type());
	this->_brain = new Brain(src.get__brain());
	std::cout << "Cat created by copy !" << std::endl;
}

Cat::~Cat(void) // destructor
{
	delete this->_brain;
	std::cout << "Cat destroyed !" << std::endl;
}








