/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 15:15:05 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <dispatcher.hpp>

class Contact
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string					_first_name;
		std::string					_last_name;
		std::string					_nickname;
		std::string					_phone_number;
		std::string					_darkest_secret;
		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Contact(void);  // constructor
		Contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _darkest_secret);  // constructor
		Contact(const Contact &src);  // constructor by copy
		virtual ~Contact(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		// Contact	&operator=(const Contact &rhs);
		// GETTERS / SETTERS : GS
		void			set__darkest_secret(std::string _darkest_secret);
		std::string		get__darkest_secret(void) const;
		void			set__phone_number(std::string _phone_number);
		std::string		get__phone_number(void) const;
		void			set__nickname(std::string _nickname);
		std::string		get__nickname(void) const;
		void			set__last_name(std::string _last_name);
		std::string		get__last_name(void) const;
		void			set__first_name(std::string _first_name);
		std::string		get__first_name(void) const;
		// PUBLIC MEMBERS ATTRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		static void		print_column_names(void);
		void			print(void) const;
		void			print_short(int id) const;

};

std::ostream	&operator<<(std::ostream &o, const Contact &i);

#endif
