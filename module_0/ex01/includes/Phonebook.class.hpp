/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/06/30 14:28:03 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <dispatcher.hpp>
# define SIZE_PHONEBOOK		8

class Phonebook
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		Contact						_contacts[SIZE_PHONEBOOK];
		Contact						_exemple[10];
		size_t						nb_entry;

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		Phonebook(void);  // constructor
		Phonebook(const Phonebook &src);  // constructor by copy
		virtual ~Phonebook(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Phonebook	&operator=(const Phonebook &rhs);
		// GETTERS / SETTERS : GS

		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void						exit(void);
		void						search(void);
		void						autofill(void);
		void						add(void);
		void						run_cmd(std::string cmd);

};

std::ostream	&operator<<(std::ostream &o, const Phonebook &i);

/*Contact			g_exemple[10] =
{
	{ "Pierre"   , "Trump"   , "La roulette", "0667354618", "blackholded" },
	{ "Lucie"    , "Martin"  , "Rapide"     , "0618945317", "rich" },
	{ "Danny"    , "Panneau" , "Beau"       , "0691749981", "not a human" },
	{ "Muriel"   , "Bois"    , "Lupette"    , "0612387937", "rebel" },
	{ "Louis"    , "Clavier" , "Orange"     , "0678942639", "poor" },
	{ "Tess"     , "Duck"    , "Planche"    , "0601938382", "for the empire" },
	{ "Theo"     , "Dupont"  , "Le rat"     , "0619128938", "soviet" },
	{ "Eleonore" , "Macron"  , "Le filou"   , "0611919834", "not alive" },
	{ "Aymeric"  , "Siphile" , "La brave"   , "0605952716", "kill people every night" },
	{ "Chloe"    , "Loul"    , "Le maigre"  , "0611773789", "NC" },
};*/

#endif
