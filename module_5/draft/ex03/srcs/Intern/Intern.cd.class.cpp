/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cd.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 14:53:23 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Intern::Intern(void)  // constructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "created with basic constructor."
		<< std::endl;
}

Intern::Intern(Intern const &src)  // constructor by copy
{
	*this = src;
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "created with copy constructor."
		<< std::endl;
}

Intern::~Intern(void) // destructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "destroyed."
		<< std::endl;
}

Intern::InvalidFormNameException::InvalidFormNameException(void)
{

}
