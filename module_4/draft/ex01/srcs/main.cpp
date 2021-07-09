/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 17:27:20 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>
# define EACH	4
int		main(void)
{
	{
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		delete i; //should not create a leak
		delete j; //should not create a leak
	}
	std::cout << "--------------------------------------------" << std::endl;
	{
		std::cout << "<---" << std::endl;
		Animal	a1;
		std::cout << "<---" << std::endl;
		Cat		c1;
		std::cout << "<---" << std::endl;
		Dog		d1;
		std::cout << "<---" << std::endl;
		Animal	a2_copy(a1);
		std::cout << "<---" << std::endl;
		Cat		c2_copy(c1);
		std::cout << "<---" << std::endl;
		Dog		d2_copy(d1);
		std::cout << "<---" << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
	{
		Animal		*array[EACH * 2];
		for (int i = 0; i < EACH; i++)
		{
			std::cout << "<---" << std::endl;
			array[i] = new Cat();
		}
		for (int i = EACH; i < EACH * 2; i++)
		{
			std::cout << "<---" << std::endl;
			array[i] = new Dog();
		}
		for (int i = 0; i < EACH * 2; i++)
		{
			std::cout << "<---" << std::endl;
			array[i]->makeSound();
		}
		for (int i = 0; i < EACH * 2; i++)
		{
			std::cout << "<---" << std::endl;
			delete array[i];
		}
		std::cout << "<---" << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
	{
		std::cout << "<---" << std::endl;
		const Cat	*c1 = new Cat();
		std::cout << "<---" << std::endl;
		const Dog	*d1 = new Dog();
		std::cout << "<---" << std::endl;
		const Cat	*c2 = new Cat(*c1);
		std::cout << "<---" << std::endl;

		std::cout << "|            | c1             | c2             |" << std::endl;
		std::cout << "| &brain     | " << &(c1->get__brain()) << " | " << &(c2->get__brain()) << " |" << std::endl;
		for (int i = 0; i < 100; i++)
			std::cout << "| ideas[" << std::setw(3) << i << "]" << " | " << &(c1->get__brain().get__ideas(i)) << " | " << &(c2->get__brain().get__ideas(i)) << " |" << std::endl;
		std::cout << "<---" << std::endl;
		delete c1; //should not create a leak
		std::cout << "<---" << std::endl;
		delete c2; //should not create a leak
		std::cout << "<---" << std::endl;
		delete d1; //should not create a leak
		std::cout << "<---" << std::endl;
	}
	return (0);
}
