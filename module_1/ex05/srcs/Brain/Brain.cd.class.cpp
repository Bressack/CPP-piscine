/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cd.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 18:54:35 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Brain::Brain(void)  // constructor
{
	std::cout << C_G_CYAN << "Brain " << C_G_YELLOW << " CONSTRUCTOR" << C_RES << " called" << std::endl;
}

Brain::Brain(Brain const &src)  // constructor by copy
{
	std::cout << C_G_CYAN << "Brain " << C_G_YELLOW << " CONSTRUCTOR" << C_RES << " called (copy)" << std::endl;
	*this = src;
}

Brain::~Brain(void) // destructor
{
	std::cout << C_G_CYAN << "Brain " << C_G_MAGENTA << " DESTRUCTOR" << C_RES << " called" << std::endl;
}
