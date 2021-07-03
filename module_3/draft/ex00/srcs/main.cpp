/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/03 15:13:40 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

# define NB_CLAP	5

int	ft_rand(int b)
{
	static int init = 0;

	if (init == 0)
	{
		srand(time(NULL));
		init = 1;
	}
	return (rand() % b);
}

std::string	randname(void)
{
	char	s[9];

	s[0] = 'o';
	s[1] = 'b';
	s[2] = '3';
	s[3] = '-';
	s[4] = ft_rand('9' - '0') + '0';
	s[5] = ft_rand('9' - '0') + '0';
	s[6] = ft_rand('9' - '0') + '0';
	s[7] = ft_rand('9' - '0') + '0';
	s[8] = 0;
	return (std::string(s));
}

int		main(void)
{
	ClapTrap	*clap[NB_CLAP];

	for (size_t i = 0; i < NB_CLAP; i++)
		clap[i] = new ClapTrap(randname());

	std::cout << std::endl << "START OF THE 2021 EDITION OF BATTLE ARENA !!!" << std::endl << std::endl;
	for (size_t i = 0;; i++)
	{
		std::cout << std::endl << std::endl << "[ FIGHT ] { " << i + 1 << " }" << std::endl;
		int	clap_1 = ft_rand(NB_CLAP);
		int	clap_2 = ft_rand(NB_CLAP);
		int result = ClapTrap::fight(*clap[clap_1], *clap[clap_2]);
		if (result == 1)
			break ;
		if (!ft_rand(100))
		{
			std::cout << "Fight stopped cause: insane rain !" << std::endl;
			break ;
		}
		if (!ft_rand(5))
			ClapTrap::repair(*clap[clap_1]);
		if (!ft_rand(5))
			ClapTrap::repair(*clap[clap_2]);
	}
	std::cout << std::endl << "END OF THE GRAND BATTLE OF 2021 (covid won)" << std::endl << std::endl;
	for (size_t i = 0; i < NB_CLAP; i++)
		delete clap[i];
	return (0);
}
