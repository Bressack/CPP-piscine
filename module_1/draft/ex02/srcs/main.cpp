/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 12:11:06 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "&str               : " << &str << std::endl;
	std::cout << "stringPTR          : " << stringPTR << std::endl;
	std::cout << "&stringREF         : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "str                : " << str << std::endl;
	std::cout << "stringPTR->c_str() : " << stringPTR->c_str() << std::endl;
	std::cout << "stringREF          : " << stringREF << std::endl;
	return (0);
}
