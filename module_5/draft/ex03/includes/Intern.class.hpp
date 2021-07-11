/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 14:52:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP
# include <dispatcher.hpp>
# define CONCRETS_FORMS_COUNT		3

typedef enum		e_concrets_forms_id
{
	PRESIDENTIAL,
	ROBOTOMY,
	SHRUBERRY
}					t_concrets_forms_id;

typedef struct		s_concrets_forms
{
	const enum e_concrets_forms_id	id;
	const std::string				name;
}					t_concrets_forms;

extern struct s_concrets_forms	concrets_forms_list[CONCRETS_FORMS_COUNT];

class Intern
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA

		// PRIVATE MEMBERS FUNCTION : PRIMF

	public:
		class InvalidFormNameException : public std::exception
		{
			public:
				InvalidFormNameException(void);
				const char *what() const throw();
		};
		// CONSTRUCTOR / DESTRUCTOR : CD
		Intern(void);  // constructor
		Intern(const Intern &src);  // constructor by copy
		virtual ~Intern(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Intern	&operator=(const Intern &rhs);
		// GETTERS / SETTERS : GS
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		Form	*makeForm(std::string form_name, std::string target);
};

std::ostream	&operator<<(std::ostream &o, const Intern &i);
#endif
