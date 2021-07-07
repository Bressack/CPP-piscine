/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 16:58:05 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_CLASS_HPP
# define KAREN_CLASS_HPP
# include <dispatcher.hpp>

class Karen
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Karen(void);  // constructor
		Karen(const Karen &src);  // constructor by copy
		virtual ~Karen(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Karen	&operator=(const Karen &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void complain(std::string level);
};

std::ostream	&operator<<(std::ostream &o, const Karen &i);
#endif
