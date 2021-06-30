/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 15:36:35 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int				min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

std::string		ft_toupper(std::string s)
{
	for (int i = 0; s[i]; i++)
		s[i] = std::toupper(s[i]);
	return (s);
}

bool			ft_is_number(const std::string& str)
{
	for (size_t i = 0; str[i]; i++)
		if (std::isdigit(str[i]) == 0)
			return (false);
	return (true);
}

int				ft_stoi(std::string str)
{
	std::istringstream		iss(str);
	int						n;

	iss >> n;
	return (n);
}

int				get_number_from_entry(int min, int max, std::string msg)
{
	std::string	tmp;
	int			n;

	std::cout << msg << ": ";
	while (1)
	{
		getline(std::cin, tmp);
		if (std::cin.eof() == true)
		{
			std::cout << "exit :)" << std::endl;
			throw (0);
		}
		if (!(tmp.length() == 0 || ft_is_number(tmp) == false))
		{
			n = ft_stoi(tmp);
			if ((max == min && n >= min) || (n >= min && n <= max))
				break ;
		}
		std::cout << "invalid entry: " << msg << ": ";
	}
	return (n);
}

std::string		get_cmd_from_cin(std::string msg)
{
	std::string		cmd;

	while (1)
	{
		std::cout << msg;
		getline(std::cin, cmd);
		if (std::cin.eof() == true)
			throw (1);
		if (cmd.length() != 0)
			break ;
	}
	return (cmd);
}

int		main(void)
{
	Phonebook		phonebook;
	std::string		cmd;

	while (1)
	{
		try
		{
			cmd = get_cmd_from_cin(">: ");
			phonebook.run_cmd(cmd);
		}
		catch (int e)
		{
			if (e == 1)
			{
				std::cout << "exit :)" << std::endl;
				return (0);
			}
			else if (e == 2)
				std::cout << "invalid command" << std::endl;
		}
	}
	return (0);
}
