/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.gs.class.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 12:30:39 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _target

std::string	PresidentialPardonForm::get__target(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::set__target(std::string _target)
{
	this->_target = _target;
}

////////////////////////////////////////////////////////////////////////////////
