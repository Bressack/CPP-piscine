/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:49:03 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/28 15:40:16 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# define MAX_SIZE		255
# define SIZE_PHONEBOOK	8
class Contact
{
	public:
		// INIT
		Contact(void);  // constructor
		~Contact(void); // destructor

		// PUBLIC METHODES
		static void		print_column_names(void);
		void			print_short_contact(void) const;
		void			print_full_contact(void) const;

		// GETTERS / SETTERS
		int				get_index(void) const;
		bool			set_index(int val);

		std::string		get_first_name(void) const;
		bool			set_first_name(std::string val);

		std::string		get_last_name(void) const;
		bool			set_last_name(std::string val);

		std::string		get_nickname(void) const;
		bool			set_nickname(std::string val);

		std::string		get_login(void) const;
		bool			set_login(std::string val);

		std::string		get_postal_address(void) const;
		bool			set_postal_address(std::string val);

		std::string		get_email_address(void) const;
		bool			set_email_address(std::string val);

		std::string		get_phone_number(void) const;
		bool			set_phone_number(std::string val);

		std::string		get_birthday_date(void) const;
		bool			set_birthday_date(std::string val);

		std::string		get_favorite_meal(void) const;
		bool			set_favorite_meal(std::string val);

		std::string		get_underwear_color(void) const;
		bool			set_underwear_color(std::string val);

		std::string		get_darkest_secret(void) const;
		bool			set_darkest_secret(std::string val);


	private:
		int				_index;
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_login;
		std::string		_postal_address;
		std::string		_email_address;
		std::string		_phone_number;
		std::string		_birthday_date;
		std::string		_favorite_meal;
		std::string		_underwear_color;
		std::string		_darkest_secret;

};
#endif
