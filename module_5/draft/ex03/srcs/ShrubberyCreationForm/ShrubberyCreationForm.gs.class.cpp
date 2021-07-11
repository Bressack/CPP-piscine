/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.gs.class.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 13:04:20 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _target

std::string	ShrubberyCreationForm::get__target(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::set__target(std::string _target)
{
	this->_target = _target;
}

////////////////////////////////////////////////////////////////////////////////

//// private _tree

std::string	ShrubberyCreationForm::get__tree(void) const
{
	return (this->_tree);
}

////////////////////////////////////////////////////////////////////////////////
