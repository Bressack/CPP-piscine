/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 15:35:00 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	std::cout << "<---" << std::endl;
	const Animal	*meta = new Animal();
	std::cout << "<---" << std::endl;
	const Animal	*i = new Cat();
	std::cout << "<---" << std::endl;
	const Animal	*j = new Dog();
	std::cout << "<---" << std::endl;
	const WrongAnimal	*wa = new WrongAnimal();
	std::cout << "<---" << std::endl;
	const WrongAnimal	*wc = new WrongCat();
	std::cout << "<---" << std::endl;

	std::cout << i->get__type() << " " << std::endl;
	std::cout << j->get__type() << " " << std::endl;
	std::cout << "Sound of Cat         : "; i->makeSound(); // will output the Cat sound!
	std::cout << "Sound of Dog         : "; j->makeSound(); // will output the Dog sound!
	std::cout << "Sound of Animal      : "; meta->makeSound(); // will output the Animal sound!

	std::cout << "Sound of WrongAnimal : "; wa->makeSound(); // will output the WrongAnimal sound!
	std::cout << "Sound of WrongCat    : "; wc->makeSound(); // will output the WrongAnimal sound!

	std::cout << "<---" << std::endl;
	delete meta;
	std::cout << "<---" << std::endl;
	delete i;
	std::cout << "<---" << std::endl;
	delete j;
	std::cout << "<---" << std::endl;
	delete wa;
	std::cout << "<---" << std::endl;
	delete wc;
	std::cout << "<---" << std::endl;
	return (0);
}
