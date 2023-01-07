/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:08:54 by akekesi           #+#    #+#             */
/*   Updated: 2023/01/07 13:58:47 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "test.h"

int	test_printf_c(void)
{
	int	n;
	int	n___;
	
	n = 0;
	n___ = 0;

	printf("|-- c -->\n");
	n = ft_printf("-->%c<--\n", 0); // <-- c
	n___ = printf("-->%c<--\n", 0); // <-- c
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%c<--\n", 48); // <-- c
	n___ = printf("-->%c<--\n", 48); // <-- c
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%c<--\n", 'X'); // <-- c
	n___ = printf("-->%c<--\n", 'X'); // <-- c
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%#c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->% c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%+c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%03c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%-03c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03.0c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%03.0c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03.0c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%-03.0c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03.5c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%03.5c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03.5c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%-03.5c<--\n", 'X'); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%#c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->% c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%+c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%03c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%-03c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03.0c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%03.0c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03.0c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%-03.0c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03.5c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%03.5c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03.5c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	n___ = printf("-->%-03.5c<--\n", 0); // <-- c (error: #, space, +, ., 0)
	if (!test_check(n, n___))
		return (0);

	printf("<-- c --|\n");
	return (1);
}
