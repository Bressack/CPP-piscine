/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/04 12:24:00 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP
# include <dispatcher.hpp>

class DiamondTrap : public FragTrap, public ScavTrap
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string					_clapname;

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		DiamondTrap(void);  // constructor
		DiamondTrap(std::string name); // constructor
		DiamondTrap(const DiamondTrap &src);  // constructor by copy
		virtual ~DiamondTrap(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		DiamondTrap	&operator=(const DiamondTrap &rhs);
		// GETTERS / SETTERS : GS
		void						set__clapname(std::string _clapname);
		std::string					get__clapname(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void	whoAmI(void);
};

std::ostream	&operator<<(std::ostream &o, const DiamondTrap &i);
#endif
