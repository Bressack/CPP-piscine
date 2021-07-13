/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:46:18 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/13 13:47:00 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

const char *NoMatchException::what() const throw()
{
	return ("no match found");
}
