/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 15:11:57 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	{
		// test valids Bureaucrat
		std::cout << C_G_GREEN << "--------------------- test valids Bureaucrat -----------------------" << C_RES << std::endl;
		try
		{
			Bureaucrat		bob("Bob", 1);
			std::cout << bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			Bureaucrat		bob("Bob", 42);
			std::cout << bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			Bureaucrat		bob("Bob", 150);
			std::cout << bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test wrong Bureaucrat
		std::cout << C_G_GREEN << "--------------------- test wrong Bureaucrat -----------------------" << C_RES << std::endl;
		try
		{
			Bureaucrat		bob("Bob", -187);
			std::cout << bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			Bureaucrat		bob("Bob", 0);
			std::cout << bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			Bureaucrat		bob("Bob", 151);
			std::cout << bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			Bureaucrat		bob("Bob", 1501);
			std::cout << bob << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test increment
		std::cout << C_G_GREEN << "--------------------- test increment -----------------------" << C_RES << std::endl;
		try
		{
			Bureaucrat		bob("Bob", 2);
			std::cout << bob << std::endl;
			bob.incrementGrade();
			std::cout << bob << std::endl;
			bob.incrementGrade(); // throw here
			// code bellow will no exec
			std::cout << bob << std::endl;
			bob.incrementGrade();
			std::cout << bob << std::endl;
			bob.incrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test decrement
		std::cout << C_G_GREEN << "--------------------- test decrement -----------------------" << C_RES << std::endl;
		try
		{
			Bureaucrat		bob("Bob", 149);
			std::cout << bob << std::endl;
			bob.decrementGrade();
			std::cout << bob << std::endl;
			bob.decrementGrade(); // throw here
			// code bellow will no exec
			std::cout << bob << std::endl;
			bob.decrementGrade();
			std::cout << bob << std::endl;
			bob.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;

		}
	}
	{
		// test full increment
		std::cout << C_G_GREEN << "test full increment: " << C_RES << std::endl;
		std::cout << C_G_GREEN << "--------------------- test full increment -----------------------" << C_RES << std::endl;
		try
		{
			Bureaucrat		bob("Bob", 150);
			std::cout << bob << std::endl;
			for (int i = 0; i < 149; i++)
			{
				bob.incrementGrade();
				std::cout << bob << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test full decrement
		std::cout << C_G_GREEN << "test full decrement: " << C_RES << std::endl;
		std::cout << C_G_GREEN << "--------------------- test full decrement -----------------------" << C_RES << std::endl;
		try
		{
			Bureaucrat		bob("Bob", 1);
			std::cout << bob << std::endl;
			for (int i = 0; i < 149; i++)
			{
				bob.decrementGrade();
				std::cout << bob << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test form creation
		std::cout << C_G_GREEN << "test form creation: " << C_RES << std::endl;
		try
		{
			Form	form("superForm", -1, 42);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test form creation
		std::cout << C_G_GREEN << "test form creation: " << C_RES << std::endl;
		try
		{
			Form	form("superForm", 1, 1242);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test form creation
		std::cout << C_G_GREEN << "test form creation: " << C_RES << std::endl;
		try
		{
			Form	form("superForm", 123, -42);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test form creation
		std::cout << C_G_GREEN << "test form creation: " << C_RES << std::endl;
		try
		{
			Form	form("superForm", -1, -42);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test form creation
		std::cout << C_G_GREEN << "test form creation: " << C_RES << std::endl;
		try
		{
			Form	form("superForm", 189237, 912837);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
	}
	{
		// test form
		std::cout << C_G_GREEN << "test form: " << C_RES << std::endl;
		Bureaucrat		boss("Boss", 1);
		Bureaucrat		manager("Manager", 42);
		Bureaucrat		trainee("Trainee", 150);

		Form			form_1("how_to_fire_a_trainee", 1, 42);
		Form			form_2("bring_coffee", 42, 150);
		Form			form_3("pay_employees", 1, 1);

		std::cout << boss << std::endl;
		std::cout << manager << std::endl;
		std::cout << trainee << std::endl;

		std::cout << form_1 << std::endl;
		std::cout << form_2 << std::endl;
		std::cout << form_3 << std::endl;

		std::cout << "<---" << std::endl;
		try
		{
			form_1.beSigned(boss);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			boss.signForm(form_1);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "<---" << std::endl;
		try
		{
			form_1.beSigned(manager);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			manager.signForm(form_1);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "<---" << std::endl;
		try
		{
			form_1.beSigned(trainee);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			trainee.signForm(form_1);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}



		std::cout << "<---" << std::endl;
		try
		{
			form_2.beSigned(boss);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			boss.signForm(form_2);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "<---" << std::endl;
		try
		{
			form_2.beSigned(manager);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			manager.signForm(form_2);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "<---" << std::endl;
		try
		{
			form_2.beSigned(trainee);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			trainee.signForm(form_2);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}



		std::cout << "<---" << std::endl;
		try
		{
			form_3.beSigned(boss);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			boss.signForm(form_3);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "<---" << std::endl;
		try
		{
			form_3.beSigned(manager);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			manager.signForm(form_3);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "<---" << std::endl;
		try
		{
			form_3.beSigned(trainee);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}

		try
		{
			trainee.signForm(form_3);
		}
		catch (std::exception &e)
		{
			std::cout << "error: " << e.what() << std::endl;
		}
		std::cout << "<---" << std::endl;
	}

	return (0);
}
