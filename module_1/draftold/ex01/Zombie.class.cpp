/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:14:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/16 14:18:48 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

std::string		g_first_name_list[NB_NT] =
{
	"Psihid",
	"Zhoq",
	"Dodog",
	"Dhotsaap",
	"Ubhuzh",
	"Toqozh",
	"Shaajhot",
	"Ninpudh",
	"Unij",
	"Ubhun",
	"Jukhquun",
	"Ghachut",
	"Ash",
	"Bzauhut",
	"Aqdoq",
	"Dobozh",
	"Suukidh",
	"Joydid",
	"Tsibhzhosh"
};

std::string		g_last_name_list[NB_NT] =
{
	"Odom",
	"Valencia",
	"Bird",
	"Ware",
	"Mcbride",
	"Mckenzie",
	"Estrada",
	"Hernandez",
	"Black",
	"Higgins",
	"Nash",
	"Garza",
	"Gallagher",
	"Holland",
	"Case",
	"Haley",
	"Yoder",
	"Holmes",
	"Flowers"
};

std::string		g_type_list[NB_NT] =
{
	"Wailer",
	"Siren",
	"Tank",
	"Chum",
	"Deducer",
	"Sponger",
	"Fighter",
	"Smasher",
	"Rancer",
	"Barfer",
	"Gobbler",
	"Buster",
	"Whiner",
	"Pincher",
	"Cleaner",
	"Slider",
	"Wrangler",
	"Herder",
	"Skipper"
};

Zombie::Zombie(void)
{
	std::cout << "Construction of a Zombie" << std::endl;
	this->_name = genname();
	this->_type = gentype();
}

Zombie::~Zombie(void)
{
	std::cout << "Destruction of a Zombie" << std::endl;
}

std::string		Zombie::genname(void)
{
	return (g_first_name_list[rand() % NB_NT] + " " + g_last_name_list[rand() % NB_NT]);
}

std::string		Zombie::gentype(void)
{
	return (g_type_list[rand() % NB_NT]);
}

std::string		Zombie::get_name(void) const
{
	return (this->_name);
}

void			Zombie::set_name(std::string s)
{
	if (s.length() > 0)
		this->_name = s;
	return ;
}

std::string		Zombie::get_type(void) const
{
	return (this->_type);
}

void			Zombie::set_type(std::string s)
{
	if (s.length() > 0)
		this->_type = s;
	return ;
}

void			Zombie::announce(void) const
{
	std::cout << "<" << this->get_name() << " (" << this->get_type() << ")> Brrrrr Brraaaaiiiinnnsss ..." << std::endl;
	return ;
}
