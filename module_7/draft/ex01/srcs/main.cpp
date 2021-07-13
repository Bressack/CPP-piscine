/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/12 13:55:15 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	std::cout << "test with <std::string>" << std::endl;
	{
		std::string array_1[5] = { "je", "suis", "un", "joli", "soleil" };
		iter(array_1, 5, print_elem<std::string>);
		std::cout << std::endl;
		iter(array_1, 1, print_elem<std::string>);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "test with <int>" << std::endl;
	{
		int array_1[5] = { 42, 421, -199, 0, 2147483647 };
		iter(array_1, 5, print_elem<int>);
		std::cout << std::endl;
		iter(array_1, 2, print_elem<int>);
		std::cout << std::endl;
		iter(array_1, 0, print_elem<int>);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "test with <char>" << std::endl;
	{
		char array_1[6] = { 'S', '0', 'l', '3', '1', 'l' };
		iter(array_1, 6, print_elem<char>);
		std::cout << std::endl;
		iter(array_1, 3, print_elem<char>);
		std::cout << std::endl;
		// commented code bellow will crash with {stack-buffer-overflow} if executed :)
		// iter(array_1, 7, print_elem<char>);
		// std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "test with <float>" << std::endl;
	{
		float array_1[5] = { 42.203f, 0.0f, 12.00000001f, -1293872130.9f, -1.0f };
		iter(array_1, 5, print_elem<float>);
		std::cout << std::endl;
		iter(array_1, 2, print_elem<float>);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "test with <bool>" << std::endl;
	{
		bool array_1[2] = { true, false };
		iter(array_1, 2, print_elem<bool>);
		std::cout << std::endl;
		iter(array_1, 1, print_elem<bool>);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
