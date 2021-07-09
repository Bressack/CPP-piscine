/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 17:41:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <dispatcher.hpp>

class Animal
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
		std::string					_type;

		// PROTECTED MEMBERS FUNCTION : PROMF
	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Animal(void);  // constructor
		Animal(const Animal &src);  // constructor by copy
		virtual ~Animal(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Animal	&operator=(const Animal &rhs);
		// GETTERS / SETTERS : GS
		void						set__type(std::string _type);
		std::string					get__type(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		virtual void				makeSound(void) const = 0;

};

std::ostream	&operator<<(std::ostream &o, const Animal &i);
#endif
