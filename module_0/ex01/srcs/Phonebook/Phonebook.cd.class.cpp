/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cd.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 15:08:01 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

Phonebook::Phonebook(void)  // constructor
{
	std::cout << "CONSTRUCTOR PHONEBOOK" << std::endl;
	this->nb_entry = 0;
	this->_exemple[0] = Contact("Pierre"   , "Trump"   , "La roulette", "0667354618", "blackholded");
	this->_exemple[1] = Contact("Lucie"    , "Martin"  , "Rapide"     , "0618945317", "rich");
	this->_exemple[2] = Contact("Danny"    , "Panneau" , "Beau"       , "0691749981", "not a human");
	this->_exemple[3] = Contact("Muriel"   , "Bois"    , "Lupette"    , "0612387937", "rebel");
	this->_exemple[4] = Contact("Louis"    , "Clavier" , "Orange"     , "0678942639", "poor");
	this->_exemple[5] = Contact("Tess"     , "Duck"    , "Planche"    , "0601938382", "for the empire");
	this->_exemple[6] = Contact("Theo"     , "Dupont"  , "Le rat"     , "0619128938", "soviet");
	this->_exemple[7] = Contact("Eleonore" , "Macron"  , "Le filou"   , "0611919834", "not alive");
	this->_exemple[8] = Contact("Aymeric"  , "Siphile" , "La brave"   , "0605952716", "kill people every night");
	this->_exemple[9] = Contact("Chloe"    , "Loul"    , "Le maigre"  , "0611773789", "NC");
}

Phonebook::Phonebook(Phonebook const &src)  // constructor by copy
{
	*this = src;
}

Phonebook::~Phonebook(void) // destructor
{

}
