/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:40:00 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/04 14:57:30 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <dispatcher.hpp>

ZombieEvent::ZombieEvent(void)
{
	std::cout << "Construction of a ZombieEvent" << std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Destruction of a ZombieEvent" << std::endl;
}

std::string		ZombieEvent::get_type(void) const
{
	return (this->_type);
}

void			ZombieEvent::set_type(std::string s)
{
	if (s.length() > 0)
		this->_type = s;
	return ;
}

void			ZombieEvent::setZombieType(std::string type)
{
	ZombieEvent::set_type(type);
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie		*zomzom;

	zomzom = new Zombie();
	zomzom->set_name(name);
	zomzom->set_type(this->get_type());
	return (zomzom);
}

std::string			ZombieEvent::genname(void)
{
	return (g_first_name_list[rand() % NB_NT] + " " + g_last_name_list[rand() % NB_NT]);
}

std::string			ZombieEvent::gentype(void)
{
	return (g_type_list[rand() % NB_NT]);
}

Zombie			*ZombieEvent::randomChump()
{
	Zombie		*newZb;

	newZb = this->newZombie(ZombieEvent::genname());
	newZb->announce();
	return (newZb);
}
