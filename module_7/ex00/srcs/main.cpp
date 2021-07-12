/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/12 13:34:16 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

template< typename T >
void	test(T & a, T & b)
{
	std::cout << "TEST ---------------- [ a: " << C_G_YELLOW << std::left << std::setw(13) << a << C_RES" ] | [ b: " << C_G_YELLOW << std::left << std::setw(13) << b << C_RES" ]" << std::endl;
	::swap(a, b); std::cout << "    > ::swap(a, b); | ";
	std::cout << "[ a: " << C_G_GREEN << std::left << std::setw(13) << a << C_RES" ] | [ b: " << C_G_GREEN << std::left << std::setw(13) << b << C_RES" ]" << std::endl;
	::swap(a, b); std::cout << "    > ::swap(a, b); | ";
	std::cout << "[ a: " << C_G_GREEN << std::left << std::setw(13) << a << C_RES" ] | [ b: " << C_G_GREEN << std::left << std::setw(13) << b << C_RES" ]" << std::endl;

	::min(a, b); std::cout  << "    > ::min(a, b);  | ";
	std::cout << "[ a: " << C_G_GREEN << std::left << std::setw(13) << a << C_RES" ] | [ b: " << C_G_GREEN << std::left << std::setw(13) << b << C_RES" ] | [ min: " << C_G_RED << ::min(a, b) << C_RES" ]" << std::endl;
	::max(a, b); std::cout  << "    > ::max(a, b);  | ";
	std::cout << "[ a: " << C_G_GREEN << std::left << std::setw(13) << a << C_RES" ] | [ b: " << C_G_GREEN << std::left << std::setw(13) << b << C_RES" ] | [ max: " << C_G_RED << ::max(a, b) << C_RES" ]" << std::endl;
	std::cout << "-----------------------------------------------------------------------------------------------" << std::endl;
}

int		main(void)
{
	std::cout << C_G_GRAY << "Tests subject" << C_RES << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << C_G_GRAY << "Tests for char" << C_RES << std::endl;
	{
		char a = 0;
		char b = 'A';
		char c = '#';
		char d = -42;
		char e = 42;
		char f = CHAR_MAX;
		char g = CHAR_MIN;

		test(a, a);
		test(a, b);
		test(a, c);
		test(a, d);
		test(a, e);
		test(a, f);
		test(a, g);

		test(b, a);
		test(b, b);
		test(b, c);
		test(b, d);
		test(b, e);
		test(b, f);
		test(b, g);

		test(c, a);
		test(c, b);
		test(c, c);
		test(c, d);
		test(c, e);
		test(c, f);
		test(c, g);

		test(d, a);
		test(d, b);
		test(d, c);
		test(d, d);
		test(d, e);
		test(d, f);
		test(d, g);

		test(e, a);
		test(e, b);
		test(e, c);
		test(e, d);
		test(e, e);
		test(e, f);
		test(e, g);

		test(f, a);
		test(f, b);
		test(f, c);
		test(f, d);
		test(f, e);
		test(f, f);
		test(f, g);

		test(g, a);
		test(g, b);
		test(g, c);
		test(g, d);
		test(g, e);
		test(g, f);
		test(g, g);
	}
	std::cout << C_G_GRAY << "Tests for int" << C_RES << std::endl;
	{
		int a = 0;
		int b = 1;
		int c = -1;
		int d = -42;
		int e = 42;
		int f = INT_MAX;
		int g = INT_MIN;

		test(a, a);
		test(a, b);
		test(a, c);
		test(a, d);
		test(a, e);
		test(a, f);
		test(a, g);

		test(b, a);
		test(b, b);
		test(b, c);
		test(b, d);
		test(b, e);
		test(b, f);
		test(b, g);

		test(c, a);
		test(c, b);
		test(c, c);
		test(c, d);
		test(c, e);
		test(c, f);
		test(c, g);

		test(d, a);
		test(d, b);
		test(d, c);
		test(d, d);
		test(d, e);
		test(d, f);
		test(d, g);

		test(e, a);
		test(e, b);
		test(e, c);
		test(e, d);
		test(e, e);
		test(e, f);
		test(e, g);

		test(f, a);
		test(f, b);
		test(f, c);
		test(f, d);
		test(f, e);
		test(f, f);
		test(f, g);

		test(g, a);
		test(g, b);
		test(g, c);
		test(g, d);
		test(g, e);
		test(g, f);
		test(g, g);
	}
	std::cout << C_G_GRAY << "Tests for float" << C_RES << std::endl;
	{
		float a = 0.0f;
		float b = 1.4f;
		float c = 1.41f;
		float d = -42.0f;
		float e = 42.034f;
		float f = 94726475632.91123f;
		float g = -281929030134.321244f;

		test(a, a);
		test(a, b);
		test(a, c);
		test(a, d);
		test(a, e);
		test(a, f);
		test(a, g);

		test(b, a);
		test(b, b);
		test(b, c);
		test(b, d);
		test(b, e);
		test(b, f);
		test(b, g);

		test(c, a);
		test(c, b);
		test(c, c);
		test(c, d);
		test(c, e);
		test(c, f);
		test(c, g);

		test(d, a);
		test(d, b);
		test(d, c);
		test(d, d);
		test(d, e);
		test(d, f);
		test(d, g);

		test(e, a);
		test(e, b);
		test(e, c);
		test(e, d);
		test(e, e);
		test(e, f);
		test(e, g);

		test(f, a);
		test(f, b);
		test(f, c);
		test(f, d);
		test(f, e);
		test(f, f);
		test(f, g);

		test(g, a);
		test(g, b);
		test(g, c);
		test(g, d);
		test(g, e);
		test(g, f);
		test(g, g);
	}
	std::cout << C_G_GRAY << "Tests for int" << C_RES << std::endl;
	{
		std::string a("");
		std::string b("Hello les soleils");
		std::string c("AAA");
		std::string d("@#&#^!@&*!(#^)");

		test(a, a);
		test(a, b);
		test(a, c);
		test(a, d);

		test(b, a);
		test(b, b);
		test(b, c);
		test(b, d);

		test(c, a);
		test(c, b);
		test(c, c);
		test(c, d);

		test(d, a);
		test(d, b);
		test(d, c);
		test(d, d);
	}
	return (0);
}
