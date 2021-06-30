/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.gs.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:15:32 by tharchen          #+#    #+#             */
/*   Updated: 2021/05/26 21:36:20 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>

// index
int				Contact::get_index(void) const
{
	return (this->_index);
}

bool			Contact::set_index(int val)
{
	if (val < 0 || val > SIZE_PHONEBOOK)
		return (false);
	else
	{
		this->_index = val;
		return (true);
	}
}

// first_name
std::string		Contact::get_first_name(void) const
{
	return (this->_first_name);
}

bool			Contact::set_first_name(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_first_name = val;
		return (true);
	}
}

// last_name
std::string		Contact::get_last_name(void) const
{
	return (this->_last_name);
}

bool			Contact::set_last_name(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_last_name = val;
		return (true);
	}
}

// nickname
std::string		Contact::get_nickname(void) const
{
	return (this->_nickname);
}

bool			Contact::set_nickname(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_nickname = val;
		return (true);
	}
}

// login
std::string		Contact::get_login(void) const
{
	return (this->_login);
}

bool			Contact::set_login(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_login = val;
		return (true);
	}
}

// postal_address
std::string		Contact::get_postal_address(void) const
{
	return (this->_postal_address);
}

bool			Contact::set_postal_address(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_postal_address = val;
		return (true);
	}
}

// email_address
std::string		Contact::get_email_address(void) const
{
	return (this->_email_address);
}

bool			Contact::set_email_address(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_email_address = val;
		return (true);
	}
}

// phone_number
std::string		Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

bool			Contact::set_phone_number(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_phone_number = val;
		return (true);
	}
}

// birthday_date
std::string		Contact::get_birthday_date(void) const
{
	return (this->_birthday_date);
}

bool			Contact::set_birthday_date(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_birthday_date = val;
		return (true);
	}
}

// favorite_meal
std::string		Contact::get_favorite_meal(void) const
{
	return (this->_favorite_meal);
}

bool			Contact::set_favorite_meal(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_favorite_meal = val;
		return (true);
	}
}

// underwear_color
std::string		Contact::get_underwear_color(void) const
{
	return (this->_underwear_color);
}

bool			Contact::set_underwear_color(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_underwear_color = val;
		return (true);
	}
}

// darkest_secret
std::string		Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

bool			Contact::set_darkest_secret(std::string val)
{
	if (val.length() > MAX_SIZE || !val.length())
	{
		std::cerr << "invalid value size: " << val.length()
			<< ", the size must be between 1 and " << MAX_SIZE << std::endl;
		return (false);
	}
	else
	{
		this->_darkest_secret = val;
		return (true);
	}
}

