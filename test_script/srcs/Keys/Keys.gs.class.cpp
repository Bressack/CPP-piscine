/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern_gs.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/18 13:28:46 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

//// public id

long							Keys::get_id(void) const
{
	return (this->id);
}

void							Keys::set_id(long id)
{
	this->id = id;
}

////////////////////////////////////////////////////////////////////////////////


//// public public_key

int							Keys::get_public_key(void) const
{
	return (this->public_key);
}

void							Keys::set_public_key(int public_key)
{
	this->public_key = public_key;
}

////////////////////////////////////////////////////////////////////////////////


//// private _private_key

int							Keys::get__private_key(void) const
{
	return (this->_private_key);
}

void							Keys::set__private_key(int _private_key)
{
	this->_private_key = _private_key;
}

////////////////////////////////////////////////////////////////////////////////


//// private _next

Keys							*Keys::get__next(void) const
{
	return (this->_next);
}

void							Keys::set__next(Keys *_next)
{
	this->_next = _next;
}

////////////////////////////////////////////////////////////////////////////////


//// private _prev

Keys							*Keys::get__prev(void) const
{
	return (this->_prev);
}

void							Keys::set__prev(Keys *_prev)
{
	this->_prev = _prev;
}

////////////////////////////////////////////////////////////////////////////////


//// protected security_key

int							Keys::get_security_key(void) const
{
	return (this->security_key);
}

void							Keys::set_security_key(int security_key)
{
	this->security_key = security_key;
}

////////////////////////////////////////////////////////////////////////////////

