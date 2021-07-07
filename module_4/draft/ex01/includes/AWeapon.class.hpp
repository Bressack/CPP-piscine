/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 12:59:36 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_HPP
# define AWEAPON_CLASS_HPP
# include <dispatcher.hpp>

class AWeapon
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
		std::string					_name;
		int							_ap_cost;
		int							_damage;

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		AWeapon(void);  // constructor
		AWeapon(std::string const & name, int ap_cost, int damage);  // constructor
		AWeapon(const AWeapon &src);  // constructor by copy
		virtual ~AWeapon(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		AWeapon	&operator=(const AWeapon &rhs);
		// GETTERS / SETTERS : GS
		void						set__damage(int _damage);
		int							get__damage(void) const;
		void						set__ap_cost(int _ap_cost);
		int							get__ap_cost(void) const;
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		virtual void				attack(void) const = 0;

};

std::ostream	&operator<<(std::ostream &o, const AWeapon &i);
#endif
