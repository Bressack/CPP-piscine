/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/12 19:03:59 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	{
		Array<int> array;

		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		try
		{
			std::cout << array[1] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		try
		{
			std::cout << array[-1] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		for (int i = -5; i < 15; i++)
		{
			try
			{
				std::cout << C_G_GREEN"elem[" << i << "]: "C_RES << array[i] << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << "error: " << e.what() << std::endl;
			}
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Array<int> array(10);

		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		for (size_t i = 0; i < 10; i++)
		{
			array[i] = i;
		}
		////////////////////////
		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access to array[-1]: "C_RES << array[-1];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access toarray [5]: "C_RES << array[5];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access to array[10]: "C_RES << array[10];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		for (int i = -5; i < 15; i++)
		{
			try
			{
				std::cout << C_G_GREEN"elem[" << i << "]: "C_RES << array[i] << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << "error: " << e.what() << std::endl;
			}
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Array<float> array(10);

		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		float tmp = 0.0f;
		for (size_t i = 0; i < 10; i++)
		{
			array[i] = tmp;
			tmp += 0.45f;
		}
		////////////////////////
		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access to array[-1]: "C_RES << array[-1];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access toarray [5]: "C_RES << array[5];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access to array[10]: "C_RES << array[10];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		for (int i = -5; i < 15; i++)
		{
			try
			{
				std::cout << C_G_GREEN"elem[" << i << "]: "C_RES << array[i] << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << "error: " << e.what() << std::endl;
			}
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Array<std::string> array(6);

		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		array[0] = std::string("le");
		array[1] = std::string("soleil");
		array[2] = std::string("est");
		array[3] = std::string("si");
		array[4] = std::string("chaud");
		array[5] = std::string("!");
		////////////////////////
		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access to array[-42]: "C_RES << array[-42];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access toarray [2]: "C_RES << array[2];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		////////////////////////
		try
		{
			std::cout << C_G_GREEN"try to access to array[10]: "C_RES << array[10];
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << C_G_GREEN"write in array[4]: "C_RES << std::endl;
		array[4] = std::string("beau");
		std::cout << C_G_GREEN"print array of size (" << array.size() << "): "C_RES << array << std::endl;
		Array<std::string> copy;
		std::cout << C_G_GREEN"new Array copy: "C_RES << std::endl;
		copy = array;
		std::cout << C_G_GREEN"print array of size (" << copy.size() << "): "C_RES << copy << std::endl;
		std::cout << C_G_GREEN"write in array[4]: "C_RES << std::endl;
		array[4] = std::string("froid");
		std::cout << C_G_GREEN"print array [array]: "C_RES << array << std::endl;
		std::cout << C_G_GREEN"print array [copy]: "C_RES << copy << std::endl;
		for (int i = -5; i < 10; i++)
		{
			try
			{
				std::cout << C_G_GREEN"elem[" << i << "]: "C_RES << array[i] << std::endl;
			}
			catch (std::exception & e)
			{
				std::cout << "error: " << e.what() << std::endl;
			}
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Array<Array<int> > lol(10);

		std::cout << lol << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		Array<Array<Array<Array<int> > > > lolmdrptdr(10);

		std::cout << lolmdrptdr << std::endl;
	}
	return (0);
}
