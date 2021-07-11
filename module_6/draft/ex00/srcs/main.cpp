/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 18:46:22 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

bool is_number(std::string const &str) {
	for (int i = 0; str[i]; i++)
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-' && str[i] != 'f')
			return false;
	return true;
}

bool is_except(std::string const &str) {
	return (str == "nan" || str == "nanf" || str == "inf" || str == "-inf" ||
			str == "inff" || str == "-inff");
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "usage: cast <number>" << std::endl;
		return (1);
	}
	{
		std::string src(av[1]);
		std::string	str;
		double		k(0);
		int			start(0);
		int			size(0);

		// remove white space
		while (src[start] && std::isspace(src[start]))
			start++;
		while (src[start + size] && !std::isspace(src[start + size]))
			size++;
		str = std::string(src, start, size);
		// one char but not printable
		if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
			k = str[0];
		else if (str.length() > 1 && !is_number(str) && !is_except(str))
		{
			std::cout << "impossible" << std::endl;
			return (1);
		}
		else
		{
			// number ?
			try
			{
				k = strtold(str.c_str(), NULL);
			}
			catch (std::exception &e)
			{
				// neither a number nor a single char
				std::cout << "No conversion found!"    << std::endl;
				std::cout << "char       : impossible" << std::endl;
				std::cout << "int        : impossible" << std::endl;
				std::cout << "float      : impossible" << std::endl;
				std::cout << "double     : impossible" << std::endl;
				return (0);
			}
		}

		// char conversion /////////////////////////////////////////////////////
		std::cout << std::setw(10) << std::left << "char" << " : ";
		if (k < CHAR_MIN || k > CHAR_MAX || isnan(k))
			std::cout << "impossible" << std::endl;
		else if (std::isprint(k))
			std::cout << static_cast<unsigned char>(k) << std::endl;
		else
			std::cout << "non displayable" << std::endl;

		// int conversion //////////////////////////////////////////////////////
		std::cout << std::setw(10) << std::left << "int" << " : ";
		if (k >= INT_MIN && k <= INT_MAX && !isnan(k) && !isinf(k))
			std::cout << static_cast<int>(k) << std::endl;
		else
			std::cout << "impossible " << std::endl;

		// float conversion ////////////////////////////////////////////////////
		std::cout << std::setw(10) << std::left << "float" << " : ";
		if (isnan(k))
			std::cout << "nan";
		else if (isinf(k))
			std::cout << (k < 0 ? "-" : "") << "inf";
		else
			std::cout << static_cast<float>(k);
		std::cout << "f" << std::endl;

		// double conversion ///////////////////////////////////////////////////
		std::cout << std::setw(10) << std::left << "double" << " : ";
		if (isnan(k))
			std::cout << "nan" << std::endl;
		else if (isinf(k))
			std::cout << (k < 0 ? "-" : "") << "inf" << std::endl;
		else
			std::cout << k << std::endl;
	}
	return (0);
}