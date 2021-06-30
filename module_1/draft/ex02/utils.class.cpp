/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:02:06 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/16 12:48:32 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.class.hpp>

int			ut::stoi(std::string s)
{
	int n;
	std::istringstream	iss(s);

	iss >> n;
	return (n);
}

bool		ut::is_number(const std::string& str)
{
	for (size_t i = 0; str[i]; i++)
		if (std::isdigit(str[i]) == 0)
			return (false);
	return (true);
}

bool		ut::is_number(const char *str)
{
	for (size_t i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (false);
	return (true);
}

int			ut::get_number_from_entry(int min, int max, std::string msg)
{
	std::string	tmp;
	int			n;

	std::cout << msg << ": ";
	while (1)
	{
		getline(std::cin, tmp);
		if (std::cin.eof() == true)
		{
			tmp = "0";
			std::cout << "0 \n";
		}
		if (!(tmp.length() == 0 || ut::is_number(tmp) == false))
		{
			n = ut::stoi(tmp);
			if ((max == min && n >= min) || (n >= min && n <= max))
				break ;
		}
		std::cout << "invalid entry: " << msg << ": ";
	}
	return (n);
}
