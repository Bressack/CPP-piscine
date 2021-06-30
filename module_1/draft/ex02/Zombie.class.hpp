/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:21:50 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/04 13:38:43 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
# include <dispatcher.hpp>
# define NB_NT		19
extern std::string	g_first_name_list[NB_NT];
extern std::string	g_last_name_list[NB_NT];
extern std::string	g_type_list[NB_NT];
class Zombie
{
	private:
		std::string		_name;
		std::string		_type;

	public:
		Zombie(void);  // constructor
		~Zombie(void); // destructor

	// gs
		std::string		get_name(void) const;
		void			set_name(std::string);

		std::string		get_type(void) const;
		void			set_type(std::string);

	// members functions
		void			announce(void) const;

};
#endif
