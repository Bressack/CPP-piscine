/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:44:01 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 13:45:48 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NoMatchException: public std::exception
{
	public:
		NoMatchException(void) {}
		const char *what() const throw();
};

template<typename T>
typename T::iterator easyfind(T & cont, int value)
{
	typename T::iterator ret;

	ret = std::find(cont.begin(), cont.end(), value);
	if (ret == cont.end())
		throw NoMatchException();
	return (ret);
}

#endif