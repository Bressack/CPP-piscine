/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 12:59:01 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_HPP
# define POWERFIST_CLASS_HPP
# include <dispatcher.hpp>

class PowerFist: virtual public AWeapon
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		PowerFist(void);  // constructor
		PowerFist(const PowerFist &src);  // constructor by copy
		virtual ~PowerFist(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		PowerFist	&operator=(const PowerFist &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

};

std::ostream	&operator<<(std::ostream &o, const PowerFist &i);
#endif
