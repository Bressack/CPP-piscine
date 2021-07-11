/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 12:58:15 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP
# include <dispatcher.hpp>

class PresidentialPardonForm: public Form
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string					_target;

		// PRIVATE MEMBERS FUNCTION : PRIMF
		PresidentialPardonForm(void);  // constructor

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		PresidentialPardonForm(std::string target);  // constructor
		PresidentialPardonForm(const PresidentialPardonForm &src);  // constructor by copy
		virtual ~PresidentialPardonForm(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
		// GETTERS / SETTERS : GS
		void			set__target(std::string _target);
		std::string		get__target(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void			execute(const Bureaucrat &bureaucrat) const;
};

std::ostream	&operator<<(std::ostream &o, const PresidentialPardonForm &i);
#endif
