/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cd.class.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:36:15 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 13:21:10 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

const std::string ShrubberyCreationForm::_tree =
"~.         .       .   ,@@@@@@@,      .          ..       .   ,@@@@@@@,      .          .       .   ,@@@@@@@,      .          .      ~\n"
"~ tharchen     ,,,.   ,@@@@@@/@@,  .oo8888o.    .     ,,,.   ,@@@@@@/@@,  .oo8888o.    .    ,,,.   ,@@@@@@/@@,  .oo8888o.    .   .   ~\n"
"~        .  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o      ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o           ~\n"
"~    .     ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'    .     ~\n"
"~  .    .  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   .      ~\n"
"~    .     %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'     %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'      .    ~\n"
"~  .     . `&%\\ ` /%&' . |.| .   .   \\ '|8'       `&%\\ ` /%&'  . |.| .   .  \\ '|8'       `&%\\ ` /%&' . |.| .   .  \\ '|8'       .     ~\n"
"~          .   |o| .     | |    .     | |    .    .   |o|  .     | |    .    | |     .  .   |o| .      | |    .    | |     .         ~\n"
"~ .   . .    . |.|       | | .     .  | | .         . |.|      . | | .     . | |  .       . |.|     .  | | .     . | |  .      .   . ~\n"
"~_//__/_\\_ /\\\\/ ._\\/_/__/  ,\\_//__\\\\/.   \\_/\\\\/ ._\\//_/__/  ,\\_//___\\\\/.  \\\\/ ._\\//_// ,\\_//___\\\\ /. //\\_//__/_/. //\\_//__/_ \\_/ _\\  ~\n";

ShrubberyCreationForm::ShrubberyCreationForm(void) // constructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created with basic constructor."
		<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): // constructor
Form("ShrubberyCreationForm", 145, 137),
_target(target)
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created with parametric constructor."
		<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : // constructor by copy
Form(src.get__name(), src.get__gradetosigne(), src.get__gradetoexecute()),
_target(src.get__target())
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "created by deep copy."
		<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) // destructor
{
	std::cout
		<< "[ " << __FUNCTION__ << " ] "
		<< "<" << this->get__name() << "> "
		<< "destroyed."
		<< std::endl;
}

ShrubberyCreationForm::FileErrorException::FileErrorException(void)
{

}
