/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cd.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 14:37:12 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Cat::Cat(void)  // constructor
{
	std::cout << "Cat created !" << std::endl;
	this->set__type("Cat");
}

Cat::Cat(Cat const &src)  // constructor by copy
{
	std::cout << "Cat created by copy !" << std::endl;
	this->set__type(src.get__type());
}

Cat::~Cat(void) // destructor
{
	std::cout << "Cat destroyed !" << std::endl;
}
