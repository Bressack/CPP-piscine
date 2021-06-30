/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:00:46 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 15:40:58 by tharchen         ###   ########.fr       */
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
# include <time.h>
# include <stdlib.h>
//!!CLASSES_INCLUDES
# include <Contact.class.hpp>
# include <Phonebook.class.hpp>
std::string		ft_toupper(std::string s);
bool			ft_is_number(const std::string& str);
int				ft_stoi(std::string str);
int				get_number_from_entry(int min, int max, std::string msg);
std::string		get_cmd_from_cin(std::string msg);
int				min(int a, int b);
#endif
