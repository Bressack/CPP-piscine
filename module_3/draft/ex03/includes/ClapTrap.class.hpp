/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 10:33:56 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP
# include <dispatcher.hpp>

class ClapTrap
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
		std::string					_name;
		int							_attack_damage;
		int							_energy_point;
		int							_hitpoint;

		int					_MAX_HIT_POINT;
		int					_MAX_ENERGY_POINT;
		int					_ATTACK_DAMAGE;
		int					_ATTACK_COST;
		std::string			_ROBOT_TYPE;
		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		ClapTrap(void);  // constructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src);  // constructor by copy
		virtual ~ClapTrap(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		ClapTrap	&operator=(const ClapTrap &rhs);
		// GETTERS / SETTERS : GS
		void						set__attack_damage(int _attack_damage);
		int							get__attack_damage(void) const;
		void						set__energy_point(int _energy_point);
		int							get__energy_point(void) const;
		void						set__hitpoint(int _hitpoint);
		int							get__hitpoint(void) const;
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		std::string					get__ROBOT_TYPE(void) const;
		void						set__ROBOT_TYPE(std::string robot_type);
		int							get__MAX_HIT_POINT(void) const;
		void						set__MAX_HIT_POINT(int value);
		int							get__MAX_ENERGY_POINT(void) const;
		void						set__MAX_ENERGY_POINT(int value);
		int							get__ATTACK_DAMAGE(void) const;
		void						set__ATTACK_DAMAGE(int value);
		int							get__ATTACK_COST(void) const;
		void						set__ATTACK_COST(int value);
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void						be_repaired(unsigned int amount) ;
		void						take_damage(unsigned int amount) ;
		void						attack(std::string const & target);

		static int					fight(ClapTrap & attacker, ClapTrap & defender);
		static void					repair(ClapTrap & clap);

};

std::ostream	&operator<<(std::ostream &o, const ClapTrap &i);
#endif
