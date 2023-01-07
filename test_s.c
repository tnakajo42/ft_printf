/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:47:21 by akekesi           #+#    #+#             */
/*   Updated: 2023/01/07 19:24:42 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "test.h"

int	test_printf_s(void)
{
	int	n;
	int	n___;
	char *s = "hallo\0berlin";
	
	n = 0;
	n___ = 0;

	printf("|-- s -->\n");
	n = ft_printf("-->%.2s<--\n", "NULL"); // <-- s
	n___ = printf("-->%.2s<--\n", "NULL"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.4s<--\n", NULL); // <-- s
	n___ = printf("-->%.4s<--\n", NULL); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.03s<--\n", NULL); // <-- s
	n___ = printf("-->%.03s<--\n", NULL); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%s<--\n", "abcde"); // <-- s
	n___ = printf("-->%s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.s<--\n", "abcde"); // <-- s
	n___ = printf("-->%.s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.0s<--\n", "abcde"); // <-- s
	n___ = printf("-->%.0s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.3s<--\n", "abcde"); // <-- s
	n___ = printf("-->%.3s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.7s<--\n", "abcde"); // <-- s
	n___ = printf("-->%.7s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%1.7s<--\n", "abcde"); // <-- s
	n___ = printf("-->%1.7s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%7.13s<--\n", "abcde"); // <-- s
	n___ = printf("-->%7.13s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-7.13s<--\n", "abcde"); // <-- s
	n___ = printf("-->%-7.13s<--\n", "abcde"); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+-7.13s<--\n", "abcde"); // <-- s (error: + used)
	n___ = printf("-->%+-7.13s<--\n", "abcde"); // <-- s (error: + used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-7.13s<--\n", "abcde"); // <-- s (error: 0 used)
	n___ = printf("-->%0-7.13s<--\n", "abcde"); // <-- s (error: 0 used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% s<--\n", "abcde"); // <-- s (error: space used)
	n___ = printf("-->% s<--\n", "abcde"); // <-- s (error: space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% 7.13s<--\n", "abcde"); // <-- s (error: space used)
	n___ = printf("-->% 7.13s<--\n", "abcde"); // <-- s (error: space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#s<--\n", "abcde"); // <-- s (error: # used)
	n___ = printf("-->%#s<--\n", "abcde"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#7.13s<--\n", "abcde"); // <-- s (error: # used)
	n___ = printf("-->%#7.13s<--\n", "abcde"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.s<--\n", NULL); // <-- s (error: 'void *' used)
	n___ = printf("-->%.s<--\n", NULL); // <-- s (error: 'void *' used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.0s<--\n", NULL); // <-- s (error: 'void *' used)
	n___ = printf("-->%.0s<--\n", NULL); // <-- s (error: 'void *' used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.3s<--\n", NULL); // <-- s (error: 'void *' used)
	n___ = printf("-->%.3s<--\n", NULL); // <-- s (error: 'void *' used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.7s<--\n", NULL); // <-- s (error: 'void *' used)
	n___ = printf("-->%.7s<--\n", NULL); // <-- s (error: 'void *' used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%1.7s<--\n", NULL); // <-- s (error: 'void *' used)
	n___ = printf("-->%1.7s<--\n", NULL); // <-- s (error: 'void *' used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%7.13s<--\n", NULL); // <-- s (error: 'void *' used)
	n___ = printf("-->%7.13s<--\n", NULL); // <-- s (error: 'void *' used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-7.13s<--\n", NULL); // <-- s (error: 'void *' used)
	n___ = printf("-->%-7.13s<--\n", NULL); // <-- s (error: 'void *' used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+-7.13s<--\n", NULL); // <-- s (error: 'void *' and + used)
	n___ = printf("-->%+-7.13s<--\n", NULL); // <-- s (error: 'void *' and + used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-7.13s<--\n", NULL); // <-- s (error: 'void *' and 0 used)
	n___ = printf("-->%0-7.13s<--\n", NULL); // <-- s (error: 'void *' and 0 used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% s<--\n", NULL); // <-- s (error: 'void *' and space used)
	n___ = printf("-->% s<--\n", NULL); // <-- s (error: 'void *' and space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% 7.13s<--\n", NULL); // <-- s (error: 'void *' and space used)
	n___ = printf("-->% 7.13s<--\n", NULL); // <-- s (error: 'void *' and space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#s<--\n", NULL); // <-- s (error: 'void *' and # used)
	n___ = printf("-->%#s<--\n", NULL); // <-- s (error: 'void *' and # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#7.13s<--\n", NULL); // <-- s (error: 'void *' and # used)
	n___ = printf("-->%#7.13s<--\n", NULL); // <-- s (error: 'void *' and # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.s<--\n", 0); // <-- s
	n___ = printf("-->%.s<--\n", 0); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.0s<--\n", 0); // <-- s
	n___ = printf("-->%.0s<--\n", 0); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.3s<--\n", 0); // <-- s
	n___ = printf("-->%.3s<--\n", 0); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.7s<--\n", 0); // <-- s
	n___ = printf("-->%.7s<--\n", 0); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%1.7s<--\n", 0); // <-- s
	n___ = printf("-->%1.7s<--\n", 0); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%7.13s<--\n", 0); // <-- s
	n___ = printf("-->%7.13s<--\n", 0); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-7.13s<--\n", 0); // <-- s
	n___ = printf("-->%-7.13s<--\n", 0); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+-7.13s<--\n", 0); // <-- s (error: + used)
	n___ = printf("-->%+-7.13s<--\n", 0); // <-- s (error: + used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-7.13s<--\n", 0); // <-- s (error: 0 used)
	n___ = printf("-->%0-7.13s<--\n", 0); // <-- s (error: 0 used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% s<--\n", 0); // <-- s (error: space used)
	n___ = printf("-->% s<--\n", 0); // <-- s (error: space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% 7.13s<--\n", 0); // <-- s (error: space used)
	n___ = printf("-->% 7.13s<--\n", 0); // <-- s (error: space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#s<--\n", 0); // <-- s (error: # used)
	n___ = printf("-->%#s<--\n", 0); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#7.13s<--\n", 0); // <-- s (error: # used)
	n___ = printf("-->%#7.13s<--\n", 0); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.s<--\n", ""); // <-- s
	n___ = printf("-->%.s<--\n", ""); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.0s<--\n", ""); // <-- s
	n___ = printf("-->%.0s<--\n", ""); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.3s<--\n", ""); // <-- s
	n___ = printf("-->%.3s<--\n", ""); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.7s<--\n", ""); // <-- s
	n___ = printf("-->%.7s<--\n", ""); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%1.7s<--\n", ""); // <-- s
	n___ = printf("-->%1.7s<--\n", ""); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%7.13s<--\n", ""); // <-- s
	n___ = printf("-->%7.13s<--\n", ""); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-7.13s<--\n", ""); // <-- s
	n___ = printf("-->%-7.13s<--\n", ""); // <-- s
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+-7.13s<--\n", ""); // <-- s (error: + used)
	n___ = printf("-->%+-7.13s<--\n", ""); // <-- s (error: + used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%0-7.13s<--\n", ""); // <-- s (error: 0 used)
	n___ = printf("-->%0-7.13s<--\n", ""); // <-- s (error: 0 used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% s<--\n", ""); // <-- s (error: space used)
	n___ = printf("-->% s<--\n", ""); // <-- s (error: space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% 7.13s<--\n", ""); // <-- s (error: space used)
	n___ = printf("-->% 7.13s<--\n", ""); // <-- s (error: space used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#s<--\n", ""); // <-- s (error: # used)
	n___ = printf("-->%#s<--\n", ""); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#7.13s<--\n", ""); // <-- s (error: # used)
	n___ = printf("-->%#7.13s<--\n", ""); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#07.13s<--\n", ""); // <-- s (error: # used)
	n___ = printf("-->%#07.13s<--\n", ""); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%03.2s<--\n", "ABC"); // <-- s (error: # used)
	n___ = printf("-->%03.2s<--\n", "ABC"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03.2s<--\n", "ABC"); // <-- s (error: # used)
	n___ = printf("-->%-03.2s<--\n", "ABC"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-03.0s<--\n", "ABC"); // <-- s (error: # used)
	n___ = printf("-->%-03.0s<--\n", "ABC"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-01.0s<--\n", "ABC"); // <-- s (error: # used)
	n___ = printf("-->%-01.0s<--\n", "ABC"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%01.0s<--\n", "ABC"); // <-- s (error: # used)
	n___ = printf("-->%01.0s<--\n", "ABC"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%01.2s<--\n", "ABC"); // <-- s (error: # used)
	n___ = printf("-->%01.2s<--\n", "ABC"); // <-- s (error: # used)
	if (!test_check(n, n___))
		return (0);

	printf("_______________LAST_TEST\n");
	n = ft_printf("-->% -7.3s*%+ -7.7s*%#7.1s[%-7.9s]%7.9s\n", "hello", "world", NULL, NULL, NULL);
	n___ = printf("-->% -7.3s*%+ -7.7s*%#7.1s[%-7.9s]%7.9s\n", "hello", "world", NULL, NULL, NULL);
	if (!test_check(n, n___))
		return (0);
		
	n = ft_printf("-->%3.1s*%9.1s*% .09s*%-9.1s*%3.6s*%20.6s<--\n", NULL, NULL, NULL, NULL, NULL, NULL);
	n___ = printf("-->%3.1s*%9.1s*% .09s*%-9.1s*%3.6s*%20.6s<--\n", NULL, NULL, NULL, NULL, NULL, NULL);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%3.s*%10.s*%-3.s*%-8.s*%-3.8s*%-10.8s<--\n", NULL, NULL, NULL, NULL, NULL, NULL);
	n___ = printf("-->%3.s*%10.s*%-3.s*%-8.s*%-3.8s*%-10.8s<--\n", NULL, NULL, NULL, NULL, NULL, NULL);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%- .09s*%23s*%2s*%-33s*%-16s*%-3s<--\n", NULL, NULL, NULL, NULL, NULL, NULL);
	n___ = printf("-->%- .09s*%23s*%2s*%-33s*%-16s*%-3s<--\n", NULL, NULL, NULL, NULL, NULL, NULL);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%3.s*%10.s*%-3.s*%-8.s<--\n", s, s, s, s);
	n___ = printf("-->%3.s*%10.s*%-3.s*%-8.s<--\n", s, s, s, s);
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% - .00s*% - .01s*% - .9s<--\n", s, s, s);
	n___ = printf("-->% - .00s*% - .01s*% - .9s<--\n", s, s, s);
	if (!test_check(n, n___))
		return (0);

	printf("<-- s --|\n");
	return (1);
}
	