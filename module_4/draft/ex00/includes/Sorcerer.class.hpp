/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/05 12:32:14 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP
# include <dispatcher.hpp>

class Sorcerer
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
		std::string					_name;
		std::string					_title;

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF
		Sorcerer(void);  // constructor

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Sorcerer(std::string name, std::string title);  // constructor
		Sorcerer(const Sorcerer &src);  // constructor by copy
		virtual ~Sorcerer(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Sorcerer	&operator=(const Sorcerer &rhs);
		// GETTERS / SETTERS : GS
		void						set__title(std::string _title);
		std::string					get__title(void) const;
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void polymorph(Victim const &victim) const;

};

std::ostream	&operator<<(std::ostream &o, const Sorcerer &i);
#endif
