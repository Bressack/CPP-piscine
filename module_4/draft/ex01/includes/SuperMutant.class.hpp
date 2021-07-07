/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 19:00:09 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP
# include <dispatcher.hpp>

class SuperMutant
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		SuperMutant(void);  // constructor
		SuperMutant(const SuperMutant &src);  // constructor by copy
		virtual ~SuperMutant(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		SuperMutant	&operator=(const SuperMutant &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

};

std::ostream	&operator<<(std::ostream &o, const SuperMutant &i);
#endif
