/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern_cd.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/17 19:54:28 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

SuperMutant::SuperMutant(void)  // constructor
{

}

SuperMutant::SuperMutant(SuperMutant const &src)  // constructor by copy
{
	*this = src;
}

SuperMutant::~SuperMutant(void) // destructor
{

}
