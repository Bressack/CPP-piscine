/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 19:00:09 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP
# include <dispatcher.hpp>

class Enemy
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA
		int							_hp;
		std::string					_type;

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Enemy(void);  // constructor
		Enemy(const Enemy &src);  // constructor by copy
		virtual ~Enemy(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Enemy	&operator=(const Enemy &rhs);
		// GETTERS / SETTERS : GS
		void						set__hp(int _hp);
		int							get__hp(void) const;
		void						set__type(std::string _type);
		std::string					get__type(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void						takeDamage(void) ;

};

std::ostream	&operator<<(std::ostream &o, const Enemy &i);
#endif
