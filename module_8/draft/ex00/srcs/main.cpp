/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 17:18:04 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void 	print_elem(int & elem)
{
	std::cout << "[" << elem << "] ";
}

int		main(void)
{
	{
		std::list<int> lst;

		for (size_t i = 0; i < 20; i++)
			lst.push_back(i);

		try
		{
			for_each(lst.begin(), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, -4), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, 'A'), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, 3), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, 12), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, 0), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, 19), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, 190), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		try
		{
			for_each(easyfind(lst, uint(42)), lst.end(), print_elem);
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: easyfind: " << e.what() << std::endl;
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
		for (int i = -5; i < 25; i++)
		{
			try
			{
				for_each(easyfind(lst, int(i)), lst.end(), print_elem);
				std::cout << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << "error: easyfind: " << e.what() << std::endl;
			}
		}
		std::cout << C_G_RED"<--- --- --- --- --- --- --- --- --- --- --- --- ---"C_RES << std::endl;
	}
	return (0);
}
