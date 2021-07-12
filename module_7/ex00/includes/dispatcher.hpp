/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:00:46 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/12 19:10:33 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPATCHER_HPP
# define DISPATCHER_HPP
# define C_G_BLACK 		"\033[30;01m"
# define C_G_RED 		"\033[31;01m"
# define C_G_GREEN		"\033[32;01m"
# define C_G_YELLOW		"\033[33;01m"
# define C_G_BLUE		"\033[34;01m"
# define C_G_MAGENTA	"\033[35;01m"
# define C_G_CYAN		"\033[36;01m"
# define C_G_WHITE		"\033[37;01m"
# define C_G_GRAY		"\033[90;01m"
# define C_RES			"\033[0m"
# include <sstream>
# include <iostream>
# include <iomanip>
# include <string>
# include <cstrings>
# include <ctime>
# include <cstdlib>
# include <stdint.h>
# include <climits>
//!!CLASSES_INCLUDES
template< typename T >
void swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T const & min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template< typename T >
T const & max(T const & a, T const & b)
{
	return (a > b ? a : b);
}
#endif
