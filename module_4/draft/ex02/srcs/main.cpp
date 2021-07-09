/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 17:46:02 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	{
		// uncomment the line below to check that Animal Class is abstract :)
		// Animal		animal;
		std::cout << "<---" << std::endl;
		Cat			*cat = new Cat;
		std::cout << "<---" << std::endl;
		Dog			*dog = new Dog;
		std::cout << "<---" << std::endl;
		cat->makeSound();
		std::cout << "<---" << std::endl;
		dog->makeSound();
		std::cout << "<---" << std::endl;
		delete cat;
		std::cout << "<---" << std::endl;
		delete dog;
		std::cout << "<---" << std::endl;
	}
	return (0);
}
