/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:22:18 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/16 14:07:06 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_HPP
# define ZOMBIEHORDE_CLASS_HPP
# include <dispatcher.hpp>
class ZombieHorde
{
	private:
		int		_zombies_count;
		Zombie	*_zombies;

	public:
		ZombieHorde(int n);  // constructor
		~ZombieHorde(void); // destructor
		void	announce(void) const;
};
#endif
