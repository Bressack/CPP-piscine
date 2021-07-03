/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/03 20:30:01 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP
# include <dispatcher.hpp>

class FragTrap : public ClapTrap
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF
		FragTrap(void);  // constructor

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);  // constructor by copy
		virtual ~FragTrap(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		FragTrap	&operator=(const FragTrap &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void		highFivesGuys(void);

};

std::ostream	&operator<<(std::ostream &o, const FragTrap &i);
#endif
