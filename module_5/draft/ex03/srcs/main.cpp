/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 14:58:20 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	{
		std::cout << std::endl << "<-- "C_G_GRAY"constructors:"C_RES << std::endl;
		Form		*form;
		Bureaucrat	boss("Boss", 23);
		Intern		intern;

		std::cout << std::endl << "<-- "C_G_GRAY"form = intern.makeForm(\"RobotomyRequestForm\", \"Boss\");"C_RES << std::endl;
		form = intern.makeForm("RobotomyRequestForm", "Boss");
		std::cout << std::endl << "<-- "C_G_GRAY"boss.signForm(*form);"C_RES << std::endl;
		boss.signForm(*form);
		std::cout << std::endl << "<-- "C_G_GRAY"boss.executeForm(*form);"C_RES << std::endl;
		boss.executeForm(*form);
		std::cout << std::endl << "<-- "C_G_GRAY"delete form;"C_RES << std::endl;
		delete form;
		std::cout << std::endl << "<-- "C_G_GRAY"form = intern.makeForm(\"tulipe\", \"Boss\");"C_RES << std::endl;
		form = intern.makeForm("tulipe", "Boss");
		std::cout << std::endl << "<-- "C_G_GRAY"form = intern.makeForm(\"ShrubberyCreationForm\", \"Middle Earth\");"C_RES << std::endl;
		form = intern.makeForm("ShrubberyCreationForm", "Middle Earth");
		std::cout << std::endl << "<-- "C_G_GRAY"boss.signForm(*form);"C_RES << std::endl;
		boss.signForm(*form);
		std::cout << std::endl << "<-- "C_G_GRAY"boss.executeForm(*form);"C_RES << std::endl;
		boss.executeForm(*form);
		std::cout << std::endl << "<-- "C_G_GRAY"delete form;"C_RES << std::endl;
		delete form;
		std::cout << std::endl << "<-- "C_G_GRAY"form = intern.makeForm(\"PresidentialPardonForm\", \"Daniel\");"C_RES << std::endl;
		form = intern.makeForm("PresidentialPardonForm", "Daniel");
		std::cout << std::endl << "<-- "C_G_GRAY"boss.signForm(*form);"C_RES << std::endl;
		boss.signForm(*form);
		std::cout << std::endl << "<-- "C_G_GRAY"boss.executeForm(*form);"C_RES << std::endl;
		boss.executeForm(*form);
		std::cout << std::endl << "<-- "C_G_GRAY"delete form;"C_RES << std::endl;
		delete form;
		std::cout << std::endl << "<-- "C_G_GRAY"destructors:"C_RES << std::endl;
	}
	return (0);
}
