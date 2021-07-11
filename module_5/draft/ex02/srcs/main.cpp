/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 13:28:50 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	std::cout << std::endl << "<--- "C_G_GRAY"constructors:"C_RES << std::endl;
	Bureaucrat				boss("boss", 1);
	Bureaucrat				trainee("trainee", 145);

	ShrubberyCreationForm	form_1("iforest");
	RobotomyRequestForm		form_2("Martine de la conta");
	PresidentialPardonForm	form_3("Jean");

	std::cout << std::endl << "<--- { "C_G_GRAY"trainee.signForm(form_1);"C_RES" }" << std::endl;
	trainee.signForm(form_1);
	std::cout << std::endl << "<--- { "C_G_GRAY"trainee.signForm(form_2);"C_RES" }" << std::endl;
	trainee.signForm(form_2);
	std::cout << std::endl << "<--- { "C_G_GRAY"trainee.executeForm(form_1);"C_RES" }" << std::endl;
	trainee.executeForm(form_1);
	std::cout << std::endl << "<--- { "C_G_GRAY"boss.executeForm(form_1);"C_RES" }" << std::endl;
	boss.executeForm(form_1);
	std::cout << std::endl << "<--- { "C_G_GRAY"boss.executeForm(form_2);"C_RES" }" << std::endl;
	boss.executeForm(form_2);
	std::cout << std::endl << "<--- { "C_G_GRAY"boss.signForm(form_2);"C_RES" }" << std::endl;
	boss.signForm(form_2);
	std::cout << std::endl << "<--- { "C_G_GRAY"boss.executeForm(form_2);"C_RES" }" << std::endl;
	boss.executeForm(form_2);
	std::cout << std::endl << "<--- { "C_G_GRAY"trainee.signForm(form_3);"C_RES" }" << std::endl;
	trainee.signForm(form_3);
	std::cout << std::endl << "<--- { "C_G_GRAY"boss.executeForm(form_3);"C_RES" }" << std::endl;
	boss.executeForm(form_3);
	std::cout << std::endl << "<--- { "C_G_GRAY"boss.signForm(form_3);"C_RES" }" << std::endl;
	boss.signForm(form_3);
	std::cout << std::endl << "<--- { "C_G_GRAY"boss.executeForm(form_3);"C_RES" }" << std::endl;
	boss.executeForm(form_3);
	std::cout << std::endl << "<--- "C_G_GRAY"destructors:"C_RES << std::endl;
	return (0);
}
