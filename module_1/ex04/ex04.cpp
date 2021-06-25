/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:05:26 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/16 15:11:56 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int		main(void)
{
	std::string		s("HI THIS IS BRAIN");

	std::string		*sp = &s;
	std::string		&sr = s;

	std::cout << "str             : " << s << std::endl;
	std::cout << "pointer to str  : " << sp->c_str() << std::endl;
	std::cout << "reference to str: " << sr << std::endl;
	return (0);
}
