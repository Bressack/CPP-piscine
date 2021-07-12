/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/12 11:03:58 by tharchen         ###   ########.fr       */
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
		int					_value;
		static	int	const	_num;
		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Fixed(void);  // constructor
		Fixed(int n);  // constructor
		Fixed(float n);  // constructor
		Fixed(const Fixed &src);  // constructor by copy
		virtual ~Fixed(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Fixed	&operator=(const Fixed &rhs);
		Fixed	operator+(const Fixed &rhs);
		Fixed	operator-(const Fixed &rhs);
		Fixed	operator*(const Fixed &rhs);
		Fixed	operator/(const Fixed &rhs);

		bool	operator>(const Fixed &rhs);
		bool	operator<(const Fixed &rhs);
		bool	operator>=(const Fixed &rhs);
		bool	operator<=(const Fixed &rhs);
		bool	operator==(const Fixed &rhs);
		bool	operator!=(const Fixed &rhs);

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		int		getRawBits(void) const;
		void	setRawBits(int const n);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed		&min(Fixed 	 	 &l, Fixed 		 &r);
		static Fixed const	&min(Fixed const &l, Fixed const &r);

		static Fixed		&max(Fixed 	 	 &l, Fixed 		 &r);
		static Fixed const	&max(Fixed const &l, Fixed const &r);
};

std::ostream	&operator<<(std::ostream &o, const Fixed &i);
#endif
