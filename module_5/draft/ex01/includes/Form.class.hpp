/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 15:12:32 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP
# include <dispatcher.hpp>

class Bureaucrat;

class Form
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string const			_name;
		int const					_gradetosigne;
		int const					_gradetoexecute;
		bool						_issigned;

		// PRIVATE MEMBERS FUNCTION : PRIMF
		Form(void);  // constructor

	public:
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				const char *what() const throw();
		};
		// CONSTRUCTOR / DESTRUCTOR : CD
		Form(std::string name, int gradetosigne, int gradetoexecute);  // constructor
		Form(const Form &src);  // constructor by copy
		virtual ~Form(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Form	&operator=(const Form &rhs);
		// GETTERS / SETTERS : GS
		// _name
		std::string const			get__name(void) const;
		// _gradetoexecute
		int 						get__gradetoexecute(void) const;
		// _gradetosigne
		int 						get__gradetosigne(void) const;
		// _issigned
		void						set__issigned(bool _issigned);
		bool						get__issigned(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void	beSigned(Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream &o, const Form &i);
#endif
