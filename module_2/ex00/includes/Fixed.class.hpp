/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/25 18:55:07 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <dispatcher.hpp>

class Fixed
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		const int					_bitfract = 8;
		int							_nfix;

		// PRIVATE MEMBERS FUNCTION : PRIMF
		void						set__nfix(int _nfix);
		int							get__nfix(void) const;
	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Fixed(void);  // constructor
		Fixed(const Fixed &src);  // constructor by copy
		virtual ~Fixed(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Fixed	&operator=(const Fixed &rhs);
		// GETTERS / SETTERS : GS
		void						set__bitfract(const int _bitfract);
		const int					get__bitfract(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF

};

std::ostream	&operator<<(std::ostream &o, const Fixed &i);
#endif
