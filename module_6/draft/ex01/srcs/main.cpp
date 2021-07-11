/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/11 19:02:10 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

uintptr_t serialize(Data *ptr)
{
	uintptr_t casted_ptr;

	casted_ptr = reinterpret_cast<uintptr_t>(ptr);
	return (casted_ptr);
}

Data *deserialize(uintptr_t raw)
{
	Data *ret;

	ret = reinterpret_cast<Data *>(raw);
	return (ret);
}

int main(void)
{
	Data data;
	Data *new_data;
	uintptr_t intptr;

	data.a = "Le soleil est beau !";
	data.b = 42;

	std::cout
		<< "Before cast : "
		<< "data.a: \"" << data.a << "\" | "
		<< "data.b: " << data.b
		<< std::endl;

	intptr = serialize(&data);
	std::cout << intptr << std::endl;
	new_data = deserialize(intptr);

	std::cout
		<< "After cast  : "
		<< "data.a: \"" << data.a << "\" | "
		<< "data.b: " << data.b
		<< std::endl;

	return (0);
}
