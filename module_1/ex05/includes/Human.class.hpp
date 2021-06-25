/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 18:02:36 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP
# include <dispatcher.hpp>

class Human
{
	protected:
		// PROTECTED MEMBERS ATTRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATTRIBUTE : PRIMA
		Brain const					_brain;

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Human(void);  // constructor
		Human(const Human &src);  // constructor by copy
		~Human(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Human	&operator=(const Human &rhs);
		// GETTERS / SETTERS : GS
		const Brain					&getBrain(void) const;
		// PUBLIC MEMBERS ATTRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		std::string					identify(void) const;

};

std::ostream	&operator<<(std::ostream &o, const Human &i);
#endif
