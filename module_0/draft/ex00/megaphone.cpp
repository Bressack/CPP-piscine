/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 02:47:58 by tharchen          #+#    #+#             */
/*   Updated: 2021/05/26 03:10:24 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; j < av[i][j]; j++)
				av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i];
		}
		std::cout << '\n';
	}
	return (0);
}
