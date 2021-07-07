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

#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP
# include <dispatcher.hpp>

class RadScorpion
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		RadScorpion(void);  // constructor
		RadScorpion(const RadScorpion &src);  // constructor by copy
		virtual ~RadScorpion(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		RadScorpion	&operator=(const RadScorpion &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

};

std::ostream	&operator<<(std::ostream &o, const RadScorpion &i);
#endif
