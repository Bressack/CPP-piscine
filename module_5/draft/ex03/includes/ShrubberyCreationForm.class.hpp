/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 13:03:06 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP
# include <dispatcher.hpp>

class ShrubberyCreationForm: public Form
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string					_target;
		static const std::string	_tree;

		// PRIVATE MEMBERS FUNCTION : PRIMF
		ShrubberyCreationForm(void);  // constructor

	public:
		class FileErrorException : public std::exception
		{
			public:
				FileErrorException(void);
				const char *what() const throw();
		};
		// CONSTRUCTOR / DESTRUCTOR : CD
		ShrubberyCreationForm(std::string target);  // constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &src);  // constructor by copy
		virtual ~ShrubberyCreationForm(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
		// GETTERS / SETTERS : GS
		void			set__target(std::string _target);
		std::string		get__target(void) const;
		std::string		get__tree(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void			execute(const Bureaucrat &bureaucrat) const;
};

std::ostream	&operator<<(std::ostream &o, const ShrubberyCreationForm &i);
#endif
