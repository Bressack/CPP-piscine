/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.gs.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 17:17:10 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// protected _ideas

std::string		&Brain::get__ideas(int index)
{
	return (this->_ideas[index]);
}

void			Brain::set__ideas(int index, std::string & str)
{
	this->_ideas[index] = str;
}

////////////////////////////////////////////////////////////////////////////////

