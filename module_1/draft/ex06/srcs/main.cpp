/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 17:51:01 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void	str_toupper(std::string &str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
}

void	str_tolower(std::string &str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "invalid arg" << std::endl;
		return (-1);
	}

	Karen karen;
	std::string	arg(av[1]);
	str_tolower(arg);
	karen.complain(arg);
	return (0);
}
