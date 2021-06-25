/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_pattern.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/21 11:29:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYS_CLASS_HPP
# define KEYS_CLASS_HPP
# include <dispatcher.hpp>

class Keys
{
	protected:
		// PROTECTED MEMBERS ATTRIBUTE : PROMA
		int							security_key;

	private:
		// PRIVATE MEMBERS ATTRIBUTE : PRIMA
		Keys							*_prev;
		Keys							*_next;
		int							_private_key;

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Keys(void);  // constructor
		Keys(const Keys &src);  // constructor by copy
		~Keys(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Keys	&operator=(const Keys &rhs);
		// GETTERS / SETTERS : GS
		void						set_security_key(int security_key);
		int							get_security_key(void) const;
		void						set__prev(Keys *_prev);
		Keys							*get__prev(void) const;
		void						set__next(Keys *_next);
		Keys							*get__next(void) const;
		void						set__private_key(int _private_key);
		int							get__private_key(void) const;
		void						set_public_key(int public_key);
		int							get_public_key(void) const;
		void						set_id(long id);
		long							get_id(void) const;
		// PUBLIC MEMBERS ATTRIBUTE : PUMA
		int							public_key;
		long							id;

};

std::ostream	&operator<<(std::ostream &o, const Keys &i);
#endif
