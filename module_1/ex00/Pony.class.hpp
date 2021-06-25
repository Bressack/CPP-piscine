/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 03:32:53 by tharchen          #+#    #+#             */
/*   Updated: 2021/05/27 04:03:32 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP
# include <string>
# include <iostream>
class Pony
{
	private:
		std::string		_name;
		std::string		_color;
		std::string		_type;

	public:
		Pony(std::string name, std::string color, std::string type);
		~Pony(void);

		std::string		get_name(void) const;
		void			set_name(std::string);

		std::string		get_color(void) const;
		void			set_color(std::string);

		std::string		get_type(void) const;
		void			set_type(std::string);

};
void	ponyOnTheStack(void);
void	ponyOnTheHeap(void);
#endif
