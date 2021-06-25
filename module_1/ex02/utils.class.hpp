/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:29:37 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/16 12:44:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

class ut
{
	private:
		ut(void);  // constructor
		~ut(void); // destructor
	public:
		static int		stoi(std::string s);
		static int		get_number_from_entry(int min, int max, std::string msg);
		static bool		is_number(const std::string& str);
		static bool		is_number(const char *str);

};
