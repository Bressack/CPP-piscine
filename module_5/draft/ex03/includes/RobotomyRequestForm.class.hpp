/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:33:57 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 11:52:05 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP
# include <dispatcher.hpp>

class RobotomyRequestForm: public Form
{
	protected:
		// PROTECTED MEMBERS ATRIBUTE : PROMA

		// PROTECTED MEMBERS FUNCTION : PROMF

	private:
		// PRIVATE MEMBERS ATRIBUTE : PRIMA
		std::string					_target;

		// PRIVATE MEMBERS FUNCTION : PRIMF
		RobotomyRequestForm(void);  // constructor

	public:
		// CONSTRUCTOR / DESTRUCTOR : CD
		RobotomyRequestForm(std::string target);  // constructor
		RobotomyRequestForm(const RobotomyRequestForm &src);  // constructor by copy
		virtual ~RobotomyRequestForm(void); // destructor
		// OVERLOADED OPERATORS : OVOP
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
		// GETTERS / SETTERS : GS
		void			set__target(std::string _target);
		std::string		get__target(void) const;
		// PUBLIC MEMBERS ATRIBUTE : PUMA

		// PUBLIC MEMBERS FUNCTION : PUMF
		void			execute(const Bureaucrat &bureaucrat) const;
};

std::ostream	&operator<<(std::ostream &o, const RobotomyRequestForm &i);
#endif
