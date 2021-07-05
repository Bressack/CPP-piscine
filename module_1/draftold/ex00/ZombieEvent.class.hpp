/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:40:22 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/04 13:36:29 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CLASS_HPP
# define ZOMBIEEVENT_CLASS_HPP
# include <dispatcher.hpp>
class ZombieEvent
{
	private:
		std::string		_type;

		void			set_type(std::string type);
	public:
		ZombieEvent(void);  // constructor
		~ZombieEvent(void); // destructor

	//gs
		std::string		get_type(void) const;
		void 			setZombieType(std::string type);

	// members functions
	Zombie				*newZombie(std::string name);
	Zombie				*randomChump();
	static std::string	genname(void);
	static std::string	gentype(void);
};
#endif
