/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 15:28:38 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP
# include <dispatcher.hpp>

class WrongAnimal
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
		WrongAnimal(void);  // constructor
		WrongAnimal(const WrongAnimal &src);  // constructor by copy
		virtual ~WrongAnimal(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		// GETTERS / SETTERS : GS
		void						set__type(std::string _type);
		std::string					get__type(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void				makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, const WrongAnimal &i);
#endif
