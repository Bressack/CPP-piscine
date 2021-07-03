/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/01 14:18:16 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void	printn(Fixed &n)
{
	std::cout << n         << " as float" << std::endl;
	std::cout << n.toInt() << " as integer" << std::endl;
}

void	printn(const Fixed &n)
{
	std::cout << n         << " as float" << std::endl;
	std::cout << n.toInt() << " as integer" << std::endl;
}

int		main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed const e = a;
	Fixed const f(0.01f);
	Fixed const g(0.001f);

	a = Fixed(1234.4321f);

	std::cout << "----- a -----" << std::endl;
	printn(a);
	std::cout << std::endl << "----- b -----" << std::endl;
	printn(b);
	std::cout << std::endl << "----- c -----" << std::endl;
	printn(c);
	std::cout << std::endl << "----- d -----" << std::endl;
	printn(d);
	std::cout << std::endl << "----- e -----" << std::endl;
	printn(e);
	std::cout << std::endl << "----- f -----" << std::endl;
	printn(f);
	std::cout << std::endl << "----- g -----" << std::endl;
	printn(g);
	return (0);
}
