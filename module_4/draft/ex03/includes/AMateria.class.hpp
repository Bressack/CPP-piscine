/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 19:02:32 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP
# include <dispatcher.hpp>

class ICharacter;

class AMateria
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
		AMateria(void);  // constructor
		AMateria(std::string const & type);
		AMateria(const AMateria &src);  // constructor by copy
		virtual ~AMateria(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		AMateria	&operator=(const AMateria &rhs);
		// GETTERS / SETTERS : GS
		std::string const		&	get__type(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

std::ostream	&operator<<(std::ostream &o, const AMateria &i);
#endif
