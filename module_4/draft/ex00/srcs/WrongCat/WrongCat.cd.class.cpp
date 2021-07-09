/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cd.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 15:29:37 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

WrongCat::WrongCat(void)  // constructor
{
	std::cout << "WrongCat created !" << std::endl;
	this->set__type("WrongCat");
}

WrongCat::WrongCat(WrongCat const &src)  // constructor by copy
{
	std::cout << "WrongCat created by copy !" << std::endl;
	this->set__type(src.get__type());
}

WrongCat::~WrongCat(void) // destructor
{
	std::cout << "WrongCat destroyed !" << std::endl;
}
