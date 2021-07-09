/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cd.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 20:33:17 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

AMateria::AMateria(void)  // constructor
{
	std::cout
		<< __FUNCTION__
		<< " basic constructor called !"
		<< std::endl;
}

AMateria::AMateria(AMateria const &src)  // constructor by copy
{
	this->_type = src.get__type();
	std::cout
		<< __FUNCTION__
		<< " copy constructor called !"
		<< std::endl;
}

AMateria::~AMateria(void) // destructor
{
	std::cout
		<< &(__FUNCTION__[1])
		<< " destructor called !"
		<< std::endl;
}
