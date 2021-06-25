/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 19:52:52 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP
# include <dispatcher.hpp>

class HumanB
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string					_name;
		Weapon						*_weapon;

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		HumanB(std::string name);  // constructor
		HumanB(const HumanB &src);  // constructor by copy
		virtual ~HumanB(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		HumanB	&operator=(const HumanB &rhs);
		// GETTERS / SETTERS : GS
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		void						set__weapon(Weapon &weapon);
		Weapon						*get__weapon(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void						attack(void) const;

};

std::ostream	&operator<<(std::ostream &o, const HumanB &i);
#endif
