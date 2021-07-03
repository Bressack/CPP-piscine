/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/01 13:18:15 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << "Fixed a (operator << used): ";
	std::cout << a << std::endl;
	std::cout << "Fixed a (function getRawBits used): ";
	std::cout << a.getRawBits() << std::endl << std::endl;
	std::cout << "Fixed b (operator << used): ";
	std::cout << b << std::endl;
	std::cout << "Fixed b (function getRawBits used): ";
	std::cout << b.getRawBits() << std::endl << std::endl;
	std::cout << "Fixed c (operator << used): ";
	std::cout << c << std::endl;
	std::cout << "Fixed c (function getRawBits used): ";
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
