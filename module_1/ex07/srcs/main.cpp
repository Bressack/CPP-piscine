/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/25 17:19:03 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void		replace(std::string const &filename, std::string const &to_find, std::string const &to_replace)
{
	std::string		line;
	std::ifstream	file;
	std::ofstream	output;
	size_t			pos;

	if (filename.length() == 0)
		throw (1);
	else if (to_find.length() == 0)
		throw (2);
	else if (to_replace.length() == 0)
		throw (3);
	file.open(filename.c_str());
	if (file.is_open() == 0)
		throw (4);
	output.open((filename + ".replace").c_str(), std::ios::trunc);
	if (output.is_open() == 0)
		throw (5);
	while (std::getline(file, line))
	{
		while ((pos = line.find(to_find)) != std::string::npos)
			line.replace(pos, to_find.length(), to_replace);
		output << line;
		if (!file.eof())
			output << '\n';
	}
	file.close();
	output.close();
}

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "error: need 3 arguments" << std::endl;
		return (-1);
	}
	try
	{
		replace(av[1], av[2], av[3]);
	}
	catch (const int e)
	{
		if (e == 1)
			std::cerr << "error: filename is empty" << std::endl;
		if (e == 2)
			std::cerr << "error: to_find string is empty" << std::endl;
		if (e == 3)
			std::cerr << "error: to_replace string is empty" << std::endl;
		if (e == 4)
			std::cerr << "error: input file can't be opened" << std::endl;
		if (e == 5)
			std::cerr << "error: output file can't be opened" << std::endl;
	}
	return (0);
}
