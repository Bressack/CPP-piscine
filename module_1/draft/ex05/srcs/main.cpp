/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/07 16:57:47 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

int		main(void)
{
	Karen karen;

	karen.complain("");

	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");

	karen.complain("BADdebug");
	karen.complain("BADinfo");
	karen.complain("BADwarning");
	karen.complain("BADerror");

	return (0);
}
