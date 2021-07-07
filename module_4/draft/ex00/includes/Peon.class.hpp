/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 13:42:40 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP
# include <dispatcher.hpp>

class Peon : virtual public Victim
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Peon(void);  // constructor
		Peon(std::string name); // constructor
		Peon(const Peon &src);  // constructor by copy
		virtual ~Peon(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Peon	&operator=(const Peon &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

};

std::ostream	&operator<<(std::ostream &o, const Peon &i);
#endif
