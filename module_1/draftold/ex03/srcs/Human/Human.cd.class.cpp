/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cd.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 18:54:18 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Human::Human(void)  // constructor
{
	std::cout << C_G_CYAN << "Human " << C_G_YELLOW << " CONSTRUCTOR" << C_RES << " called" << std::endl;
}

Human::Human(Human const &src)  // constructor by copy
{
	std::cout << C_G_CYAN << "Human " << C_G_YELLOW << " CONSTRUCTOR" << C_RES << " called (copy)" << std::endl;
	*this = src;
}

Human::~Human(void) // destructor
{
	std::cout << C_G_CYAN << "Human " << C_G_MAGENTA << " DESTRUCTOR" << C_RES << " called" << std::endl;
}
