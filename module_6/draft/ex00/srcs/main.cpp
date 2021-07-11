/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 16:37:36 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong usage: ./convert <number>" << std::endl;
		return (1);
	}
	{
		std::string src(av[1]);
		std::string	str;
		double		k;
		int			strStart(0);
		int			strSize(0);

		while (src[strStart] && std::isspace(src[strStart]))
			strStart++;
		while (src[strStart + strSize] && !std::isspace(src[strStart + strSize]))
			strSize++;
		str = std::string(src, strStart, strSize);
		if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
			k = str[0];
		else
		{
			try
			{
				k = std::stod(str);
			}
			catch (std::exception &e)
			{
				std::cout << "No conversion found!" << std::endl;
				std::cout << "char:   impossible" << std::endl;
				std::cout << "int:    impossible" << std::endl;
				std::cout << "float:  impossible" << std::endl;
				std::cout << "double: impossible" << std::endl;
				return (0);
			}
		}
		std::cout << "char:   ";
		if (k < CHAR_MIN || k > CHAR_MAX || isnan(k))
			std::cout << "impossible" << std::endl;
		else if (std::isprint(k))
			std::cout << static_cast<unsigned char>(k) << std::endl;
		else
			std::cout << "non displayable" << std::endl;
		std::cout << "int:    ";
		if (k >= INT_MIN && k <= INT_MAX && !isnan(k) && !isinf(k))
			std::cout << static_cast<int>(k) << std::endl;
		else
			std::cout << "impossible " << std::endl;
		std::cout << "float:  ";
		if (isnan(k))
			std::cout << "nan";
		else if (isinf(k))
			std::cout << (k < 0 ? "-" : "") << "inf";
		else
			std::cout << static_cast<float>(k);
		std::cout << "f" << std::endl;
		std::cout << "double: ";
		if (isnan(k))
			std::cout << "nan" << std::endl;
		else if (isinf(k))
			std::cout << (k < 0 ? "-" : "") << "inf" << std::endl;
		else
			std::cout << k << std::endl;
	}
	return (0);
}