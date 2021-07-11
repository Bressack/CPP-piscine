/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.gs.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/10 16:24:13 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// private _name

std::string const	Form::get__name(void) const
{
	return (this->_name);
}

////////////////////////////////////////////////////////////////////////////////


//// private _issigned

bool	Form::get__issigned(void) const
{
	return (this->_issigned);
}

void	Form::set__issigned(bool _issigned)
{
	this->_issigned = _issigned;
}

////////////////////////////////////////////////////////////////////////////////


//// private _gradetosigne

int		Form::get__gradetosigne(void) const
{
	return (this->_gradetosigne);
}

////////////////////////////////////////////////////////////////////////////////


//// private _gradetoexecute

int		Form::get__gradetoexecute(void) const
{
	return (this->_gradetoexecute);
}

////////////////////////////////////////////////////////////////////////////////

