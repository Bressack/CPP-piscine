/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 19:00:09 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP
# include <dispatcher.hpp>

class Character
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
		Character(void);  // constructor
		Character(const Character &src);  // constructor by copy
		virtual ~Character(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Character	&operator=(const Character &rhs);
		// GETTERS / SETTERS : GS
		void						set__name(std::string _name);
		std::string					get__name(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

};

std::ostream	&operator<<(std::ostream &o, const Character &i);
#endif
