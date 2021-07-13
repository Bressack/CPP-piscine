/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:37:58 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/12 13:46:25 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

template< typename T >
void 	print_elem(T const & elem)
{
	std::cout << "[" << elem << "] ";
}

template< typename T >
void	iter(T * array, size_t size, void (*f)(T const &elem))
{
	for (size_t i = 0; i < size; i++)
		(*f)(array[i]);
}
