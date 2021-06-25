/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 17:45:47 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <dispatcher.hpp>

class Brain
{
	protected:
		// PROTECTED MEMBERS ATTRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATTRIBUTE : PRIMA
		int							_id;

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Brain(void);  // constructor
		Brain(const Brain &src);  // constructor by copy
		~Brain(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Brain	&operator=(const Brain &rhs);
		// GETTERS / SETTERS : GS
		void						set__id(int _id);
		int							get__id(void) const;
		// PUBLIC MEMBERS ATTRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		std::string					identify(void) const;

};

std::ostream	&operator<<(std::ostream &o, const Brain &i);
#endif
