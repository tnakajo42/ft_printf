/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:08:54 by akekesi           #+#    #+#             */
/*   Updated: 2023/01/08 19:01:26 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "test.h"

int	test_printf_u(void)
{
	int	n;
	int	n___;
	
	n = 0;
	n___ = 0;

	printf("|-- u -->\n");
	// n = ft_printf("-->%.2i<--\n", 123); // <-- i
	// n___ = printf("-->%.2i<--\n", 123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.i<--\n", NULL); // <-- i
	// n___ = printf("-->%.i<--\n", NULL); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.i<--\n", 0); // <-- i
	// n___ = printf("-->%.i<--\n", 0); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.0i<--\n", 0); // <-- i
	// n___ = printf("-->%.0i<--\n", 0); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%5.0i<--\n", 0); // <-- i
	// n___ = printf("-->%5.0i<--\n", 0); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%u<--\n", 123); // <-- u
	// n___ = printf("-->%u<--\n", 123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->% u<--\n", 123); // <-- u (error: space)
	// n___ = printf("-->% u<--\n", 123); // <-- u (error: space)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%+u<--\n", 123); // <-- u (error: +)
	// n___ = printf("-->%+u<--\n", 123); // <-- u (error: +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%+ u<--\n", 123); // <-- u (error: space and  +)
	// n___ = printf("-->%+ u<--\n", 123); // <-- u (error: space and +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#+ u<--\n", 123); // <-- u (error: #, space and  +)
	// n___ = printf("-->%#+ u<--\n", 123); // <-- u (error: #, space and  +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%05u<--\n", 123); // <-- u
	// n___ = printf("-->%05u<--\n", 123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.5u<--\n", 123); // <-- u
	// n___ = printf("-->%.5u<--\n", 123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-05u<--\n", 123); // <-- u (error: 0)
	// n___ = printf("-->%-05u<--\n", 123); // <-- u (error: 0)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-.5u<--\n", 123); // <-- u
	// n___ = printf("-->%-.5u<--\n", 123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%7.5u<--\n", 123); // <-- u
	// n___ = printf("-->%7.5u<--\n", 123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-7.5u<--\n", 123); // <-- u
	// n___ = printf("-->%-7.5u<--\n", 123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-+7.5u<--\n", 123); // <-- u (error: +)
	// n___ = printf("-->%-+7.5u<--\n", 123); // <-- u (error: +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- 7.5u<--\n", 123); // <-- u (error: space)
	// n___ = printf("-->%- 7.5u<--\n", 123); // <-- u (error: space)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-+07.5u<--\n", 123); // <-- u (error: +, 0, - and .)
	// n___ = printf("-->%-+07.5u<--\n", 123); // <-- u (error: +, 0, - and .)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- 07.5u<--\n", 123); // <-- u (error: space, 0, - and .)
	// n___ = printf("-->%- 07.5u<--\n", 123); // <-- u (error: space, 0, - and .)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- +08.6u<--\n", 123); // <-- u (error: space, 0, -, + and .)
	// n___ = printf("-->%- +08.6u<--\n", 123); // <-- u (error: space, 0, -, + and .)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%05.u<--\n", 123); // <-- u (error: 0 with .)
	// n___ = printf("-->%05.u<--\n", 123); // <-- u (error: 0 with .)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%u<--\n", -123); // <-- u
	// n___ = printf("-->%u<--\n", -123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->% u<--\n", -123); // <-- u (error: space)
	// n___ = printf("-->% u<--\n", -123); // <-- u (error: space)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%+u<--\n", -123); // <-- u (error: +)
	// n___ = printf("-->%+u<--\n", -123); // <-- u (error: +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%+ u<--\n", -123); // <-- u (error: space and  +)
	// n___ = printf("-->%+ u<--\n", -123); // <-- u (error: space and +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#+ u<--\n", -123); // <-- u (error: #, space and  +)
	// n___ = printf("-->%#+ u<--\n", -123); // <-- u (error: #, space and  +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%05u<--\n", -123); // <-- u
	// n___ = printf("-->%05u<--\n", -123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.5u<--\n", -123); // <-- u
	// n___ = printf("-->%.5u<--\n", -123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-05u<--\n", -123); // <-- u (error: 0)
	// n___ = printf("-->%-05u<--\n", -123); // <-- u (error: 0)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-.5u<--\n", -123); // <-- u
	// n___ = printf("-->%-.5u<--\n", -123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%7.5u<--\n", -123); // <-- u
	// n___ = printf("-->%7.5u<--\n", -123); // <-- u
	// if (!test_check(n, n___))
	// 	return (0);

	n = ft_printf("-->%-7.5u<--\n", -123); // <-- u
	n___ = printf("-->%-7.5u<--\n", -123); // <-- u
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-+7.5u<--\n", -123); // <-- u (error: +)
	n___ = printf("-->%-+7.5u<--\n", -123); // <-- u (error: +)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%- 7.5u<--\n", -123); // <-- u (error: space)
	n___ = printf("-->%- 7.5u<--\n", -123); // <-- u (error: space)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-+07.5u<--\n", -123); // <-- u (error: +, 0, - and .)
	n___ = printf("-->%-+07.5u<--\n", -123); // <-- u (error: +, 0, - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%- 07.5u<--\n", -123); // <-- u (error: space, 0, - and .)
	n___ = printf("-->%- 07.5u<--\n", -123); // <-- u (error: space, 0, - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%- +08.6u<--\n", -123); // <-- u (error: space, 0, -, + and .)
	n___ = printf("-->%- +08.6u<--\n", -123); // <-- u (error: space, 0, -, + and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%05.u<--\n", -123); // <-- u (error: 0 with .)
	n___ = printf("-->%05.u<--\n", -123); // <-- u (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	printf("<-- u --|\n");
	return (1);
}
