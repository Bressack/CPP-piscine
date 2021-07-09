/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/09 19:52:50 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP
# include <dispatcher.hpp>

class MateriaSource: public IMateriaSource
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		AMateria			*_inventory[4];
		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		MateriaSource(void);  // constructor
		MateriaSource(const MateriaSource &src);  // constructor by copy
		virtual ~MateriaSource(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		MateriaSource	&operator=(const MateriaSource &rhs);
		// GETTERS / SETTERS : GS
		AMateria				*get__inventory_cell(int index) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void 			learnMateria(AMateria*);
		AMateria* 		createMateria(std::string const & type);
};

std::ostream	&operator<<(std::ostream &o, const MateriaSource &i);
#endif
