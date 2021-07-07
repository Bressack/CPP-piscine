/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 13:42:14 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP
# include <dispatcher.hpp>

class Victim
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
		Victim(void);  // constructor
		Victim(std::string name); // constructor
		Victim(const Victim &src);  // constructor by copy
		virtual ~Victim(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Victim	&operator=(const Victim &rhs);
		// GETTERS / SETTERS : GS
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void getPolymorphed(void) const;

};

std::ostream	&operator<<(std::ostream &o, const Victim &i);
#endif
