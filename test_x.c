/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:08:54 by akekesi           #+#    #+#             */
/*   Updated: 2023/01/08 21:37:26 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "test.h"

int	test_printf_x(void)
{
	int	n;
	int	n___;
	
	n = 0;
	n___ = 0;

	printf("|-- x -->\n");
	// n = ft_printf("-->%x<--\n", 171); // <-- x
	// n___ = printf("-->%x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.1x<--\n", 171); // <-- x
	// n___ = printf("-->%.1x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#.1x<--\n", 171); // <-- x
	// n___ = printf("-->%#.1x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%x<--\n", 0); // <-- x
	// n___ = printf("-->%x<--\n", 0); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.x<--\n", 0); // <-- x
	// n___ = printf("-->%.x<--\n", 0); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.0x<--\n", 0); // <-- x
	// n___ = printf("-->%.0x<--\n", 0); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%x<--\n", 171); // <-- x
	// n___ = printf("-->%x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#x<--\n", 171); // <-- x
	// n___ = printf("-->%#x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->% x<--\n", 171); // <-- x (error: space used)
	// n___ = printf("-->% x<--\n", 171); // <-- x (error: space used)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%+x<--\n", 171); // <-- x (error: + used)
	// n___ = printf("-->%+x<--\n", 171); // <-- x (error: + used)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%3x<--\n", 171); // <-- x
	// n___ = printf("-->%3x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#1x<--\n", 171); // <-- x
	// n___ = printf("-->%#1x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-8.5x<--\n", 171); // <-- x
	// n___ = printf("-->%-8.5x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%8.5x<--\n", 171); // <-- x
	// n___ = printf("-->%8.5x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#3x<--\n", 171); // <-- x
	// n___ = printf("-->%#3x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#5x<--\n", 171); // <-- x
	// n___ = printf("-->%#5x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-3x<--\n", 171); // <-- x
	// n___ = printf("-->%-3x<--\n", 171); // <-- x
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.c*%.s*%.p*%.d*%.u*%.x*%.%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// n___ = printf("-->%.c*%.s*%.p*%.d*%.u*%.x*%.%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// // -->**(nil)****%*<--
	// n = ft_printf("-->%-.0c*%-.0s*%-.0p*%-.0d*%-.0u*%-.0x*%-.0%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// n___ = printf("-->%-.0c*%-.0s*%-.0p*%-.0d*%-.0u*%-.0x*%-.0%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// // -->a*N*0x1d*171*171*ab*%*<--
	// n = ft_printf("-->%-.0c*%-.0s*%-.0p*%-.0d*%-.0u*%-.0x*%-.0%*<--\n", 'a', "NULL", n, 171, 171, 171, 171); // <-- i
	// n___ = printf("-->%-.0c*%-.0s*%-.0p*%-.0d*%-.0u*%-.0x*%-.0%*<--\n", 'a', "NULL", n, 171, 171, 171, 171); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// // -->a*N*0x1d*171*171*ab*%*<--
	// n = ft_printf("-->%-.1c*%-.1s*%-.1p*%-.1d*%-.1u*%-.1x*%-.1%*<--\n", 'a', "NULL", n, 171, 171, 171, 171); // <-- i
	// n___ = printf("-->%-.1c*%-.1s*%-.1p*%-.1d*%-.1u*%-.1x*%-.1%*<--\n", 'a', "NULL", n, 171, 171, 171, 171); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	n = ft_printf("-->p22 %.0x<--\n", 171); // <-- x
	n___ = printf("-->p22 %.0x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#1x<--\n", 171); // <-- x
	n___ = printf("-->%-#1x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#3x<--\n", 171); // <-- x
	n___ = printf("-->%-#3x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#5x<--\n", 171); // <-- x
	n___ = printf("-->%-#5x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03x<--\n", 171); // <-- x
	n___ = printf("-->%03x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0#1x<--\n", 171); // <-- x
	n___ = printf("-->%0#1x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0#3x<--\n", 171); // <-- x
	n___ = printf("-->%0#3x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0#5x<--\n", 171); // <-- x
	n___ = printf("-->%0#5x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0#7x<--\n", 171); // <-- x
	n___ = printf("-->%0#7x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#7x<--\n", 171); // <-- x
	n___ = printf("-->%-#7x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#05x<--\n", 171); // <-- x (error: 0 with -)
	n___ = printf("-->%-#05x<--\n", 171); // <-- x (error: 0 with -)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#09.x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%#09.x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#09.x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%-#09.x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#09.3x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%#09.3x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#09.3x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%-#09.3x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.x<--\n", 171);
	n___ = printf("-->%.x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.1x<--\n", 171);
	n___ = printf("-->%.1x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%7.1x<--\n", 171);
	n___ = printf("-->%7.1x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%7.4x<--\n", 171);
	n___ = printf("-->%7.4x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#7.4x<--\n", 171);
	n___ = printf("-->%#7.4x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-7.4x<--\n", 171);
	n___ = printf("-->%-7.4x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#7.4x<--\n", 171);
	n___ = printf("-->%-#7.4x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#7.1x<--\n", 171);
	n___ = printf("-->%-#7.1x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#3.5x<--\n", 171);
	n___ = printf("-->%-#3.5x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-.5x<--\n", 171);
	n___ = printf("-->%-.5x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#1.1x<--\n", 171);
	n___ = printf("-->%-#1.1x<--\n", 171);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0.x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%0.x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0.1x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%0.1x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%07.1x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%07.1x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%07.4x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%07.4x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0#7.4x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%0#7.4x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-7.4x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%0-7.4x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-#7.4x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%0-#7.4x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-#7.1x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%0-#7.1x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-#3.5x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%0-#3.5x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-.5x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%0-.5x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-#1.1x<--\n", 171); // <-- x (error: 0 with - and .)
	n___ = printf("-->%0-#1.1x<--\n", 171); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#01.5x<--\n", 171); // <-- x (error: 0 with .)
	n___ = printf("-->%#01.5x<--\n", 171); // <-- x (error: 0 with .)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-3x<--\n", 171); // <-- x (error: 0 with -)
	n___ = printf("-->%0-3x<--\n", 171); // <-- x (error: 0 with -)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-#1x<--\n", 171); // <-- x (error: 0 with -)
	n___ = printf("-->%0-#1x<--\n", 171); // <-- x (error: 0 with -)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-#3x<--\n", 171); // <-- x (error: 0 with -)
	n___ = printf("-->%0-#3x<--\n", 171); // <-- x (error: 0 with -)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-#5x<--\n", 171); // <-- x (error: 0 with -)
	n___ = printf("-->%0-#5x<--\n", 171); // <-- x (error: 0 with -)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%05x<--\n", 171); // <-- x
	n___ = printf("-->%05x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0#5x<--\n", 171); // <-- x
	n___ = printf("-->%0#5x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.1x<--\n", 171); // <-- x
	n___ = printf("-->%.1x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.5x<--\n", 171); // <-- x
	n___ = printf("-->%.5x<--\n", 171); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%x<--\n", 0); // <-- x
	n___ = printf("-->%x<--\n", 0); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#x<--\n", 0); // <-- x
	n___ = printf("-->%#x<--\n", 0); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#3x<--\n", 0); // <-- x
	n___ = printf("-->%#3x<--\n", 0); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#7.6x<--\n", 0); // <-- x
	n___ = printf("-->%#7.6x<--\n", 0); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-#7.6x<--\n", 0); // <-- x
	n___ = printf("-->%-#7.6x<--\n", 0); // <-- x
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-0#7.6x<--\n", 0); // <-- x (error: 0 with - and .)
	n___ = printf("-->%-0#7.6x<--\n", 0); // <-- x (error: 0 with - and .)
	if (!test_check(n, n___))
		return (0);

	printf("<-- x --|\n");
	return (1);
}
