/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 17:48:43 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

// PROTECTED MEMBERS FUNCTION : PROMF

/* ************************************************************************** */
/* ************************************************************************** */

// PRIVATE MEMBERS FUNCTION : PRIMF
void Karen::debug(void)
{
	std::string		str(__FUNCTION__);
	str_toupper(str);
	std::cout
		<< "[ " << str << " ] "
		<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
		<< std::endl;
}

void Karen::info(void)
{
	std::string		str(__FUNCTION__);
	str_toupper(str);
	std::cout
		<< "[ " << str << " ] "
		<< "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void Karen::warning(void)
{
	std::string		str(__FUNCTION__);
	str_toupper(str);
	std::cout
		<< "[ " << str << " ] "
		<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void Karen::error(void)
{
	std::string		str(__FUNCTION__);
	str_toupper(str);
	std::cout
		<< "[ " << str << " ] "
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

/* ************************************************************************** */
/* ************************************************************************** */

// PUBLIC MEMBERS FUNCTION : PUMF
void Karen::complain(std::string level)
{
	static void (Karen::*complains[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string		complains_level[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	{
		int i = 0;
		for (i = 0; i < 4; i++)
		{
			if (level == complains_level[i])
				break ;
		}
		if (i == 4)
			std::cerr << "invalid complain !" << std::endl;
		else
		{
			for (;i < 4; i++)
				(this->*complains[i])();
		}
	}

}
/* ************************************************************************** */
/* ************************************************************************** */
