/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 11:44:22 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <dispatcher.hpp>

class Zombie
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
		std::string					_name;

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Zombie(void);  // constructor
		Zombie(std::string name);  // constructor
		Zombie(const Zombie &src);  // constructor by copy
		virtual ~Zombie(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Zombie	&operator=(const Zombie &rhs);
		// GETTERS / SETTERS : GS
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void						announce(void);

};

std::ostream	&operator<<(std::ostream &o, const Zombie &i);
#endif
