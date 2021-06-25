/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/22 12:49:28 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP
# include <dispatcher.hpp>

class HumanA
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string					_name;
		Weapon						&_weapon;

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		HumanA(std::string name, Weapon &weapon);  // constructor
		HumanA(const HumanA &src);  // constructor by copy
		virtual ~HumanA(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		HumanA	&operator=(const HumanA &rhs);
		// GETTERS / SETTERS : GS
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		Weapon						&get__weapon(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void						attack(void) const;

};

std::ostream	&operator<<(std::ostream &o, const HumanA &i);
#endif
