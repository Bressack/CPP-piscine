/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/10 16:52:13 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
# include <dispatcher.hpp>

class Bureaucrat
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		const std::string			_name;
		int							_grade;

		// PRIVATE MEMBERS FUNCTION : PRIMF
		Bureaucrat(void);  // constructor

	public:
		class 				GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				const char *what() const throw();
		};
		class 				GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				virtual const char *what() const throw();
		};
		// CONSTRUCTOR / DESTRUCTOR : CD
		Bureaucrat(std::string name, int grade);  // constructor
		Bureaucrat(const Bureaucrat &src);  // constructor by copy
		virtual ~Bureaucrat(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		// GETTERS / SETTERS : GS
		const std::string			get__name(void) const;
		int							get__grade(void) const;
		void						set__grade(int _grade);
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(Form &form);
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &i);
#endif
