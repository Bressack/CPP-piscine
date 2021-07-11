/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/10 11:42:00 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	// test valids Bureaucrat
	std::cout << "--------------------- test valids Bureaucrat -----------------------" << std::endl;
	try
	{
		Bureaucrat		bob("Bob", 1);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat		bob("Bob", 42);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat		bob("Bob", 150);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	// test wrong Bureaucrat
	std::cout << "--------------------- test wrong Bureaucrat -----------------------" << std::endl;
	try
	{
		Bureaucrat		bob("Bob", -187);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat		bob("Bob", 0);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat		bob("Bob", 151);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat		bob("Bob", 1501);
		std::cout << bob << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	// test increment
	std::cout << "--------------------- test increment -----------------------" << std::endl;
	try
	{
		Bureaucrat		bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade(); // throw here
		// code bellow will no exec
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	// test decrement
	std::cout << "--------------------- test decrement -----------------------" << std::endl;
	try
	{
		Bureaucrat		bob("Bob", 149);
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
		bob.decrementGrade(); // throw here
		// code bellow will no exec
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
		bob.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	// test full increment
	std::cout << "--------------------- test full increment -----------------------" << std::endl;
	try
	{
		Bureaucrat		bob("Bob", 150);
		std::cout << bob << std::endl;
		for (int i = 0; i < 149; i++)
		{
			bob.incrementGrade();
			std::cout << bob << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	// test full decrement
	std::cout << "--------------------- test full decrement -----------------------" << std::endl;
	try
	{
		Bureaucrat		bob("Bob", 1);
		std::cout << bob << std::endl;
		for (int i = 0; i < 149; i++)
		{
			bob.decrementGrade();
			std::cout << bob << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
	return (0);
}
