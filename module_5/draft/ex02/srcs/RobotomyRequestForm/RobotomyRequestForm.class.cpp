/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 12:29:08 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

// PROTECTED MEMBERS FUNCTION : PROMF

/* ************************************************************************** */
/* ************************************************************************** */

// PRIVATE MEMBERS FUNCTION : PRIMF

/* ************************************************************************** */
/* ************************************************************************** */

// PUBLIC MEMBERS FUNCTION : PUMF
void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::cout << "BrrrrBrrrBrrrrrrr AAAAAHH !! BrrrrrBrrrrBrrrr OUUUUILLLE !!. Tshhhh" << std::endl;
	if (rand() % 2)
		std::cout << this->get__target() << " has been robotomized.";
	else
		std::cout << this->get__target() << " has been thanked.";
	std::cout << std::endl;
}
/* ************************************************************************** */
/* ************************************************************************** */
