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

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <dispatcher.hpp>

class Contact
{
	protected:
		// PROTECTED MEMBERS ATTRIBUTE : PROMA

	private:
		// PRIVATE MEMBERS ATTRIBUTE : PRIMA
		int							_phonenumber;
		std::string					**_surname;
		std::string					_last_name2;
		std::string					_last_name;
		std::string					_first_name;

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Contact(void);  // constructor
		Contact(const Contact &src);  // constructor by copy
		~Contact(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Contact	&operator=(const Contact &rhs);
		// GETTERS / SETTERS : GS
		void						set__phonenumber(int _phonenumber);
		int							get__phonenumber(void) const;
		void						set__surname(std::string **_surname);
		std::string					**get__surname(void) const;
		void						set__last_name2(std::string _last_name2);
		std::string					get__last_name2(void) const;
		void						set__last_name(std::string _last_name);
		std::string					get__last_name(void) const;
		void						set__first_name(std::string _first_name);
		std::string					get__first_name(void) const;
		// PUBLIC MEMBERS ATTRIBUTE : PUMA

};

std::ostream	&operator<<(std::ostream &o, const Contact &i);
#endif
