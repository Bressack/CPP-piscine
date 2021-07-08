/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 21:35:21 by tharchen          #+#    #+#             */
/*   Updated: 2021/07/08 11:51:29 by tharchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dispatcher.hpp>

void	printn(const Fixed &n, std::string msg)
{
	std::cout << "        " << msg << std::endl;
	std::cout << "            " << n.toFloat() << " as float" << std::endl;
	std::cout << "            " << n.toInt()   << " as integer" << std::endl;
}

int		main(void)
{
	// subject tests
	std::cout << "subject tests" << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}

	std::cout << std::endl;
	// operator=
	std::cout << "operator=" << std::endl;
	{
		{
			std::cout << "    test 0:" << std::endl;
			Fixed a(0), b, c;

			std::cout << "        op: c = b = a;" << std::endl;
			c = b = a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test limit max:" << std::endl;
			Fixed a(8388607), b, c;

			std::cout << "        op: c = b = a;" << std::endl;
			c = b = a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test limit max + 1:" << std::endl;
			Fixed a(8388608), b(12), c;

			std::cout << "        op: c = b = a;" << std::endl;
			c = b = a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(10), b, c;

			std::cout << "        op: c = b = a;" << std::endl;
			c = b = a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.42f), b(12), c;

			std::cout << "        op: c = b = a;" << std::endl;
			c = b = a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
	}

	// operator+
	std::cout << "operator+" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c;

			std::cout << "        op: c = b + a;" << std::endl;
			c = b + a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.42f), b(7.58f), c;

			std::cout << "        op: c = b + a;" << std::endl;
			c = b + a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.42f), b(27), c;

			std::cout << "        op: c = b + a;" << std::endl;
			c = b + a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
	}

	// operator-
	std::cout << "operator-" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c;

			std::cout << "        op: c = b - a;" << std::endl;
			c = b - a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.42f), b(7.58f), c;

			std::cout << "        op: c = b - a;" << std::endl;
			c = b - a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.42f), b(27), c;

			std::cout << "        op: c = b - a;" << std::endl;
			c = b - a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
	}

	// operator*
	std::cout << "operator*" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c;

			std::cout << "        op: c = b * a;" << std::endl;
			c = b * a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.42f), b(7.58f), c;

			std::cout << "        op: c = b * a;" << std::endl;
			c = b * a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.42f), b(27), c;

			std::cout << "        op: c = b * a;" << std::endl;
			c = b * a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
	}

	// operator/
	std::cout << "operator/" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c;

			std::cout << "        op: c = b / a;" << std::endl;
			c = b / a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.42f), b(7.58f), c;

			std::cout << "        op: c = b / a;" << std::endl;
			c = b / a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.42f), b(27), c;

			std::cout << "        op: c = b / a;" << std::endl;
			c = b / a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(0), c;

			std::cout << "        op: c = b / a;" << std::endl;
			c = b / a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.42f), b(0), c;

			std::cout << "        op: c = b / a;" << std::endl;
			c = b / a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test divide by 0 with int:" << std::endl;
			Fixed a(0), b(27), c;

			std::cout << "        op: c = b / a;" << std::endl;
			c = b / a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test divide by 0 with float:" << std::endl;
			Fixed a(0), b(24.44f), c;

			std::cout << "        op: c = b / a;" << std::endl;
			c = b / a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
	}

	// operator>
	std::cout << "operator>" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c;

			std::cout << "        op: c = b * a;" << std::endl;
			c = b * a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.42f), b(7.58f), c;

			std::cout << "        op: c = b * a;" << std::endl;
			c = b * a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.42f), b(27), c;

			std::cout << "        op: c = b * a;" << std::endl;
			c = b * a;
			printn(a, "a:"), printn(b, "b:"), printn(c, "c:");
		}
	}

	// operator<
	std::cout << "operator<" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c(12);

			std::cout << "        a < b ? " << (a < b ? 1 : 0) << std::endl;
			std::cout << "        a < c ? " << (a < c ? 1 : 0) << std::endl;
			std::cout << "        a < a ? " << (a < a ? 1 : 0) << std::endl;
			std::cout << "        b < a ? " << (b < a ? 1 : 0) << std::endl;
			std::cout << "        b < c ? " << (b < c ? 1 : 0) << std::endl;
			std::cout << "        b < b ? " << (b < b ? 1 : 0) << std::endl;
			std::cout << "        c < a ? " << (c < a ? 1 : 0) << std::endl;
			std::cout << "        c < b ? " << (c < b ? 1 : 0) << std::endl;
			std::cout << "        c < c ? " << (c < c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.12f), b(7.1f), c(12.0f);

			std::cout << "        a < b ? " << (a < b ? 1 : 0) << std::endl;
			std::cout << "        a < c ? " << (a < c ? 1 : 0) << std::endl;
			std::cout << "        a < a ? " << (a < a ? 1 : 0) << std::endl;
			std::cout << "        b < a ? " << (b < a ? 1 : 0) << std::endl;
			std::cout << "        b < c ? " << (b < c ? 1 : 0) << std::endl;
			std::cout << "        b < b ? " << (b < b ? 1 : 0) << std::endl;
			std::cout << "        c < a ? " << (c < a ? 1 : 0) << std::endl;
			std::cout << "        c < b ? " << (c < b ? 1 : 0) << std::endl;
			std::cout << "        c < c ? " << (c < c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.12f), b(27), c(12.0f);

			std::cout << "        a < b ? " << (a < b ? 1 : 0) << std::endl;
			std::cout << "        a < c ? " << (a < c ? 1 : 0) << std::endl;
			std::cout << "        a < a ? " << (a < a ? 1 : 0) << std::endl;
			std::cout << "        b < a ? " << (b < a ? 1 : 0) << std::endl;
			std::cout << "        b < c ? " << (b < c ? 1 : 0) << std::endl;
			std::cout << "        b < b ? " << (b < b ? 1 : 0) << std::endl;
			std::cout << "        c < a ? " << (c < a ? 1 : 0) << std::endl;
			std::cout << "        c < b ? " << (c < b ? 1 : 0) << std::endl;
			std::cout << "        c < c ? " << (c < c ? 1 : 0) << std::endl;
		}
	}

	// operator>=
	std::cout << "operator>=" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c(12);

			std::cout << "        a >= b ? " << (a >= b ? 1 : 0) << std::endl;
			std::cout << "        a >= c ? " << (a >= c ? 1 : 0) << std::endl;
			std::cout << "        a >= a ? " << (a >= a ? 1 : 0) << std::endl;
			std::cout << "        b >= a ? " << (b >= a ? 1 : 0) << std::endl;
			std::cout << "        b >= c ? " << (b >= c ? 1 : 0) << std::endl;
			std::cout << "        b >= b ? " << (b >= b ? 1 : 0) << std::endl;
			std::cout << "        c >= a ? " << (c >= a ? 1 : 0) << std::endl;
			std::cout << "        c >= b ? " << (c >= b ? 1 : 0) << std::endl;
			std::cout << "        c >= c ? " << (c >= c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.12f), b(7.1f), c(12.0f);

			std::cout << "        a >= b ? " << (a >= b ? 1 : 0) << std::endl;
			std::cout << "        a >= c ? " << (a >= c ? 1 : 0) << std::endl;
			std::cout << "        a >= a ? " << (a >= a ? 1 : 0) << std::endl;
			std::cout << "        b >= a ? " << (b >= a ? 1 : 0) << std::endl;
			std::cout << "        b >= c ? " << (b >= c ? 1 : 0) << std::endl;
			std::cout << "        b >= b ? " << (b >= b ? 1 : 0) << std::endl;
			std::cout << "        c >= a ? " << (c >= a ? 1 : 0) << std::endl;
			std::cout << "        c >= b ? " << (c >= b ? 1 : 0) << std::endl;
			std::cout << "        c >= c ? " << (c >= c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.12f), b(27), c(12.0f);

			std::cout << "        a >= b ? " << (a >= b ? 1 : 0) << std::endl;
			std::cout << "        a >= c ? " << (a >= c ? 1 : 0) << std::endl;
			std::cout << "        a >= a ? " << (a >= a ? 1 : 0) << std::endl;
			std::cout << "        b >= a ? " << (b >= a ? 1 : 0) << std::endl;
			std::cout << "        b >= c ? " << (b >= c ? 1 : 0) << std::endl;
			std::cout << "        b >= b ? " << (b >= b ? 1 : 0) << std::endl;
			std::cout << "        c >= a ? " << (c >= a ? 1 : 0) << std::endl;
			std::cout << "        c >= b ? " << (c >= b ? 1 : 0) << std::endl;
			std::cout << "        c >= c ? " << (c >= c ? 1 : 0) << std::endl;
		}
	}

	// operator<=
	std::cout << "operator<=" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c(12);

			std::cout << "        a <= b ? " << (a <= b ? 1 : 0) << std::endl;
			std::cout << "        a <= c ? " << (a <= c ? 1 : 0) << std::endl;
			std::cout << "        a <= a ? " << (a <= a ? 1 : 0) << std::endl;
			std::cout << "        b <= a ? " << (b <= a ? 1 : 0) << std::endl;
			std::cout << "        b <= c ? " << (b <= c ? 1 : 0) << std::endl;
			std::cout << "        b <= b ? " << (b <= b ? 1 : 0) << std::endl;
			std::cout << "        c <= a ? " << (c <= a ? 1 : 0) << std::endl;
			std::cout << "        c <= b ? " << (c <= b ? 1 : 0) << std::endl;
			std::cout << "        c <= c ? " << (c <= c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.12f), b(7.1f), c(12.0f);

			std::cout << "        a <= b ? " << (a <= b ? 1 : 0) << std::endl;
			std::cout << "        a <= c ? " << (a <= c ? 1 : 0) << std::endl;
			std::cout << "        a <= a ? " << (a <= a ? 1 : 0) << std::endl;
			std::cout << "        b <= a ? " << (b <= a ? 1 : 0) << std::endl;
			std::cout << "        b <= c ? " << (b <= c ? 1 : 0) << std::endl;
			std::cout << "        b <= b ? " << (b <= b ? 1 : 0) << std::endl;
			std::cout << "        c <= a ? " << (c <= a ? 1 : 0) << std::endl;
			std::cout << "        c <= b ? " << (c <= b ? 1 : 0) << std::endl;
			std::cout << "        c <= c ? " << (c <= c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.12f), b(27), c(12.0f);

			std::cout << "        a <= b ? " << (a <= b ? 1 : 0) << std::endl;
			std::cout << "        a <= c ? " << (a <= c ? 1 : 0) << std::endl;
			std::cout << "        a <= a ? " << (a <= a ? 1 : 0) << std::endl;
			std::cout << "        b <= a ? " << (b <= a ? 1 : 0) << std::endl;
			std::cout << "        b <= c ? " << (b <= c ? 1 : 0) << std::endl;
			std::cout << "        b <= b ? " << (b <= b ? 1 : 0) << std::endl;
			std::cout << "        c <= a ? " << (c <= a ? 1 : 0) << std::endl;
			std::cout << "        c <= b ? " << (c <= b ? 1 : 0) << std::endl;
			std::cout << "        c <= c ? " << (c <= c ? 1 : 0) << std::endl;
		}
	}

	// operator==
	std::cout << "operator==" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c(12);

			std::cout << "        a == b ? " << (a == b ? 1 : 0) << std::endl;
			std::cout << "        a == c ? " << (a == c ? 1 : 0) << std::endl;
			std::cout << "        a == a ? " << (a == a ? 1 : 0) << std::endl;
			std::cout << "        b == a ? " << (b == a ? 1 : 0) << std::endl;
			std::cout << "        b == c ? " << (b == c ? 1 : 0) << std::endl;
			std::cout << "        b == b ? " << (b == b ? 1 : 0) << std::endl;
			std::cout << "        c == a ? " << (c == a ? 1 : 0) << std::endl;
			std::cout << "        c == b ? " << (c == b ? 1 : 0) << std::endl;
			std::cout << "        c == c ? " << (c == c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.12f), b(7.1f), c(12.0f);

			std::cout << "        a == b ? " << (a == b ? 1 : 0) << std::endl;
			std::cout << "        a == c ? " << (a == c ? 1 : 0) << std::endl;
			std::cout << "        a == a ? " << (a == a ? 1 : 0) << std::endl;
			std::cout << "        b == a ? " << (b == a ? 1 : 0) << std::endl;
			std::cout << "        b == c ? " << (b == c ? 1 : 0) << std::endl;
			std::cout << "        b == b ? " << (b == b ? 1 : 0) << std::endl;
			std::cout << "        c == a ? " << (c == a ? 1 : 0) << std::endl;
			std::cout << "        c == b ? " << (c == b ? 1 : 0) << std::endl;
			std::cout << "        c == c ? " << (c == c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.12f), b(27), c(12.0f);

			std::cout << "        a == b ? " << (a == b ? 1 : 0) << std::endl;
			std::cout << "        a == c ? " << (a == c ? 1 : 0) << std::endl;
			std::cout << "        a == a ? " << (a == a ? 1 : 0) << std::endl;
			std::cout << "        b == a ? " << (b == a ? 1 : 0) << std::endl;
			std::cout << "        b == c ? " << (b == c ? 1 : 0) << std::endl;
			std::cout << "        b == b ? " << (b == b ? 1 : 0) << std::endl;
			std::cout << "        c == a ? " << (c == a ? 1 : 0) << std::endl;
			std::cout << "        c == b ? " << (c == b ? 1 : 0) << std::endl;
			std::cout << "        c == c ? " << (c == c ? 1 : 0) << std::endl;
		}
	}

	// operator!=
	std::cout << "operator!=" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed a(42), b(7), c(12);

			std::cout << "        a != b ? " << (a != b ? 1 : 0) << std::endl;
			std::cout << "        a != c ? " << (a != c ? 1 : 0) << std::endl;
			std::cout << "        a != a ? " << (a != a ? 1 : 0) << std::endl;
			std::cout << "        b != a ? " << (b != a ? 1 : 0) << std::endl;
			std::cout << "        b != c ? " << (b != c ? 1 : 0) << std::endl;
			std::cout << "        b != b ? " << (b != b ? 1 : 0) << std::endl;
			std::cout << "        c != a ? " << (c != a ? 1 : 0) << std::endl;
			std::cout << "        c != b ? " << (c != b ? 1 : 0) << std::endl;
			std::cout << "        c != c ? " << (c != c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed a(42.12f), b(7.1f), c(12.0f);

			std::cout << "        a != b ? " << (a != b ? 1 : 0) << std::endl;
			std::cout << "        a != c ? " << (a != c ? 1 : 0) << std::endl;
			std::cout << "        a != a ? " << (a != a ? 1 : 0) << std::endl;
			std::cout << "        b != a ? " << (b != a ? 1 : 0) << std::endl;
			std::cout << "        b != c ? " << (b != c ? 1 : 0) << std::endl;
			std::cout << "        b != b ? " << (b != b ? 1 : 0) << std::endl;
			std::cout << "        c != a ? " << (c != a ? 1 : 0) << std::endl;
			std::cout << "        c != b ? " << (c != b ? 1 : 0) << std::endl;
			std::cout << "        c != c ? " << (c != c ? 1 : 0) << std::endl;
		}
		{
			std::cout << "    test mixte:" << std::endl;
			Fixed a(42.12f), b(27), c(12.0f);

			std::cout << "        a != b ? " << (a != b ? 1 : 0) << std::endl;
			std::cout << "        a != c ? " << (a != c ? 1 : 0) << std::endl;
			std::cout << "        a != a ? " << (a != a ? 1 : 0) << std::endl;
			std::cout << "        b != a ? " << (b != a ? 1 : 0) << std::endl;
			std::cout << "        b != c ? " << (b != c ? 1 : 0) << std::endl;
			std::cout << "        b != b ? " << (b != b ? 1 : 0) << std::endl;
			std::cout << "        c != a ? " << (c != a ? 1 : 0) << std::endl;
			std::cout << "        c != b ? " << (c != b ? 1 : 0) << std::endl;
			std::cout << "        c != c ? " << (c != c ? 1 : 0) << std::endl;
		}
	}

	// operator++
	std::cout << "operator++ (++var)" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed	a(42);

			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [++a]: " << ++a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [++a]: " << ++a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed	a(42.42f);

			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [++a]: " << ++a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [++a]: " << ++a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
		}
	}

	// operator++
	std::cout << "operator++ (var++)" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed	*a = new Fixed(42);

			std::cout << "        [a  ]: " << (*a)   << std::endl;
			std::cout << "        [a++]: " << (*a)++ << std::endl;
			// delete a;
			std::cout << "        [a  ]: " << (*a)   << std::endl;
			std::cout << "        [a++]: " << (*a)++ << std::endl;
			// delete a;
			std::cout << "        [a  ]: " << (*a)   << std::endl;
			delete a;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed	a(42.42f);

			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [a++]: " << a++ << std::endl;
			// delete a;
			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [a++]: " << a++ << std::endl;
			// delete a;
			std::cout << "        [a  ]: " << a   << std::endl;
		}
	}

	// operator--
	std::cout << "operator-- (--var)" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed	a(42);

			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [--a]: " << --a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [--a]: " << --a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed	a(42.42f);

			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [--a]: " << --a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [--a]: " << --a << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
		}
	}

	// operator--
	std::cout << "operator-- (var--)" << std::endl;
	{
		{
			std::cout << "    test int:" << std::endl;
			Fixed	a(42);

			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [a--]: " << a-- << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [a--]: " << a-- << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
		}
		{
			std::cout << "    test float:" << std::endl;
			Fixed	a(42.42f);

			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [a--]: " << a-- << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
			std::cout << "        [a--]: " << a-- << std::endl;
			std::cout << "        [a  ]: " << a   << std::endl;
		}
	}

	// min
	std::cout << "min" << std::endl;
	{
		std::cout << "    test int (a(42), b(-21))" << std::endl;
		Fixed a(42), b(-21);

		std::cout << "    min: " << Fixed::min(a, b) << std::endl;
	}
	{
		std::cout << "    test float (a(42.42), b(-21.12))" << std::endl;
		Fixed a(42.42f), b(-21.12f);

		std::cout << "    min: " << Fixed::min(a, b) << std::endl;
	}
	{
		std::cout << "    test mixte 1 (a(123.456), b(-2))" << std::endl;
		Fixed a(123.456f), b(-2);

		std::cout << "    min: " << Fixed::min(a, b) << std::endl;
	}
	{
		std::cout << "    test mixte 2 (a(-14), b(-9832.83))" << std::endl;
		Fixed a(-14), b(-9832.83f);

		std::cout << "    min: " << Fixed::min(a, b) << std::endl;
	}
	// max
	std::cout << "max" << std::endl;
	{
		std::cout << "    test int (a(42.42), b(-21.12))" << std::endl;
		Fixed a(42.42f), b(-21.12f);

		std::cout << "    max: " << Fixed::min(a, b) << std::endl;
	}
	{
		std::cout << "    test float (a(42.42), b(-21.12))" << std::endl;
		Fixed a(42.42f), b(-21.12f);

		std::cout << "    max: " << Fixed::min(a, b) << std::endl;
	}
	{
		std::cout << "    test mixte 1 (a(123.456), b(-2))" << std::endl;
		Fixed a(123.456f), b(-2);

		std::cout << "    max: " << Fixed::min(a, b) << std::endl;
	}
	{
		std::cout << "    test mixte 2 (a(-14), b(-9832.83))" << std::endl;
		Fixed a(-14), b(-9832.83f);

		std::cout << "    max: " << Fixed::min(a, b) << std::endl;
	}

	return (0);
}
