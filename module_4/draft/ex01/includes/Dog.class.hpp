/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 16:37:30 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <dispatcher.hpp>

class Dog : public Animal
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
		Brain						*_brain;

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Dog(void);  // constructor
		Dog(const Dog &src);  // constructor by copy
		virtual ~Dog(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Dog	&operator=(const Dog &rhs);
		// GETTERS / SETTERS : GS
		void						set__brain(Brain *_brain);
		Brain						&get__brain(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void				makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, const Dog &i);
#endif
