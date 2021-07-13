/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 17:15:36 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void	test(size_t spansize, size_t entry_count)
{
	Span  sp(spansize);

	std::cout << "test: adding " << entry_count << " numbers in a span of size " << spansize << ": ";
	try
	{
		for (size_t i = 0; i < entry_count; i++)
			sp.addNumber((rand() % 2000000) - 1000000);
	}
	catch (std::exception & e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	std::cout << sp << std::endl;
	std::cout << "test: print shortestSpan: ";
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	std::cout << "test: print longestSpan: ";
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	std::cout << "<------------------------------------------------>" << std::endl << std::endl << std::endl;
}

int		main(void)
{
	srand(time(NULL));

	{
		std::cout << "subject test:" << std::endl;
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	test(20, 20);
	test(20, 2);
	test(2, 20);
	test(0, 0);
	test(1, 1);
	test(2, 2);
	test(3, 3);
	test(4, 4);
	test(5, 5);
	std::cout << C_G_GREEN"#########################################################################"C_RES << std::endl << std::endl << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		test(rand() % 20, rand() % 20);
	}
	std::cout << C_G_GREEN"#########################################################################"C_RES << std::endl << std::endl << std::endl;
	std::cout << C_G_MAGENTA"warning: "C_G_WHITE << "the following test is very large and will take a few seconds to acknowledge a response :)"C_RES << std::endl;
	{
		Span veryLargeSpan(1000000);
		std::list<int> tmp;
		for (size_t i = 0; i < 1000000; i++)
			tmp.push_back((rand() % 200000) - 100000);
		std::cout << "<---" << std::endl;
		try
		{
			veryLargeSpan.addNumber(tmp.begin(), tmp.end());
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "test: print shortestSpan: ";
		try
		{
			std::cout << veryLargeSpan.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "test: print longestSpan: ";
		try
		{
			std::cout << veryLargeSpan.longestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	std::cout << C_G_GREEN"#########################################################################"C_RES << std::endl << std::endl << std::endl;
	std::cout << C_G_MAGENTA"warning: "C_G_WHITE << "the following test is very large and will take a few seconds to acknowledge a response :)"C_RES << std::endl;
	{
		Span veryLargeSpan(1000000);
		std::list<int> tmp;
		for (size_t i = 0; i < 10000042; i++)
			tmp.push_back((rand() % 200000) - 100000);
		std::cout << "<---" << std::endl;
		try
		{
			veryLargeSpan.addNumber(tmp.begin(), tmp.end());
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "test: print shortestSpan: ";
		try
		{
			std::cout << veryLargeSpan.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "test: print longestSpan: ";
		try
		{
			std::cout << veryLargeSpan.longestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	return (0);
}
