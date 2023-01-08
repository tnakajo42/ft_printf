/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atilla.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:25:55 by akekesi           #+#    #+#             */
/*   Updated: 2023/01/08 23:30:35 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "test.h"

/*
const char *str in printf cast char * --> delete everywhere const char
without t, in func just check if types is reached --> kevesebb arg in pad func es lehetne a charra is hasznalni, ha atadjuk, az argstr hosszat (char \0 is jo lesz)
-ft_int_in_str(str, t)
-ft_char_in_str_n('-', xtr, t)
*/

int	main(void)
{
	printf("|-- TEST -->\n");

	int	n;
	int	n___;
	
	n = 0;
	n___ = 0;

	// test_printf_c(); // ok
	// test_printf_s(); // ok
	// test_printf_x();
	// test_printf_x_();
	// test_printf_p();
	// test_printf_i();
	// test_printf_d(); // pok
	// test_printf_u(); // pok


	// n = ft_printf("-->%.x, %.0x<--\n", 0, 0);
	// n___ = printf("-->%.x, %.0x<--\n", 0, 0);
	// if (!test_check(n, n___))
	// 	return (0);

	n = ft_printf("-->%20.0u<--\n", -1024u);
	n___ = printf("-->%20.0u<--\n", -1024u);
	if (!test_check(n, n___))
		return (0);

	// n = ft_printf("-->%.s, %.x, %.0x<--\n", "", 171, 171);
	// n___ = printf("-->%.s, %.x, %.0x<--\n", "", 171, 171);
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.u<--\n", -1024);
	// n___ = printf("-->%.u<--\n", -1024);
	// if (!test_check(n, n___))
	// 	return (0);

	n = ft_printf("-->%20.4d<--\n", -1024);
	n___ = printf("-->%20.4d<--\n", -1024);
	if (!test_check(n, n___))
		return (0);
		
	n = ft_printf("-->%20.5d<--\n", -1024);
	n___ = printf("-->%20.5d<--\n", -1024);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0d<--\n", 0);
	n___ = printf("-->%0d<--\n", 0);
	if (!test_check(n, n___))
		return (0);

	// printf("|-- get -->\n");
	// printf("-->%s<--\n", ft_get_types());
	// printf("-->%s<--\n", ft_get_flags());
	// printf("-->%s<--\n", ft_get_null('s'));
	// printf("-->%s<--\n", ft_get_null('p'));
	// printf("-->%s<--\n", ft_get_null('?'));
	// printf("-->%s<--\n", ft_get_prefix_main(0, 1, 'x', 0));
	// printf("-->%s<--\n", ft_get_prefix_main(0, 1, 'X', 0));
	// printf("-->%s<--\n", ft_get_prefix_main(0, 1, 'p', '+'));
	// printf("-->%s<--\n", ft_get_prefix_main(0, 1, 'p', ' '));
	// printf("-->%s<--\n", ft_get_prefix_main(0, 1, 'p', 0));
	// printf("-->%s<--\n", ft_get_prefix_main(1, 1, 'x', 0));
	// printf("-->%s<--\n", ft_get_prefix_main(1, 1, 'X', 0));
	// printf("-->%s<--\n", ft_get_prefix_main(1, 1, 'p', '+'));
	// printf("-->%s<--\n", ft_get_prefix_main(1, 1, 'p', ' '));
	// printf("-->%s<--\n", ft_get_prefix_main(1, 1, 'p', 0));
	// printf("<-- get --|\n");

	printf("<-- TEST --|\n");
	return (1);
}
