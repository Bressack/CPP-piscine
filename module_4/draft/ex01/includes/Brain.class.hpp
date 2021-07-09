/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 17:17:07 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <dispatcher.hpp>

class Brain
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
	std::string				_ideas[100];
		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Brain(void);  // constructor
		Brain(const Brain &src);  // constructor by copy
		virtual ~Brain(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Brain	&operator=(const Brain &rhs);
		// GETTERS / SETTERS : GS
		std::string		&get__ideas(int index);
		void			set__ideas(int index, std::string & str);
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

};

std::ostream	&operator<<(std::ostream &o, const Brain &i);
#endif
