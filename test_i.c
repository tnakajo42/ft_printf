/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:08:54 by akekesi           #+#    #+#             */
/*   Updated: 2023/01/08 21:14:03 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "test.h"

int	test_printf_i(void)
{
	int	n;
	int	n___;
	
	n = 0;
	n___ = 0;

	printf("|-- i -->\n");
	n = ft_printf("-->%.2i<--\n", 123); // <-- i
	n___ = printf("-->%.2i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	// n = ft_printf("-->%.c*%.s*%.p*%.d*%.u*%.x*%.%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// n___ = printf("-->%.c*%.s*%.p*%.d*%.u*%.x*%.%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-.0c*%-.0s*%-.0p*%-.0d*%-.0u*%-.0x*%-.0%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// n___ = printf("-->%-.0c*%-.0s*%-.0p*%-.0d*%-.0u*%-.0x*%-.0%*<--\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	n = ft_printf("-->%0i<--\n", NULL); // <-- i
	n___ = printf("-->%0i<--\n", NULL); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.i<--\n", NULL); // <-- i
	n___ = printf("-->%.i<--\n", NULL); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.i<--\n", 0); // <-- i
	n___ = printf("-->%.i<--\n", 0); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.0i<--\n", 0); // <-- i
	n___ = printf("-->%.0i<--\n", 0); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%5.0i<--\n", 0); // <-- i
	n___ = printf("-->%5.0i<--\n", 0); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%5.1i<--\n", 0); // <-- i
	n___ = printf("-->%5.1i<--\n", 0); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%5.1i<--\n", 1); // <-- i
	n___ = printf("-->%5.1i<--\n", 1); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%i<--\n", 123); // <-- i
	n___ = printf("-->%i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->% i<--\n", 123); // <-- i
	n___ = printf("-->% i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+i<--\n", 123); // <-- i
	n___ = printf("-->%+i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%+ i<--\n", 123); // <-- i (error: space with +)
	n___ = printf("-->%+ i<--\n", 123); // <-- i (error: space with +)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%#+ i<--\n", 123); // <-- i (error: #)
	n___ = printf("-->%#+ i<--\n", 123); // <-- i (error: #)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%05i<--\n", 123); // <-- i
	n___ = printf("-->%05i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%.5i<--\n", 123); // <-- i
	n___ = printf("-->%.5i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-05i<--\n", 123); // <-- i (error: 0 with -)
	n___ = printf("-->%-05i<--\n", 123); // <-- i (error: 0 with -)
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-.5i<--\n", 123); // <-- i
	n___ = printf("-->%-.5i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-5i<--\n", 123); // <-- i
	n___ = printf("-->%-5i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%7.5i<--\n", 123); // <-- i
	n___ = printf("-->%7.5i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-7.5i<--\n", 123); // <-- i
	n___ = printf("-->%-7.5i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%12.2i<--\n", 8375); // <-- i
	n___ = printf("-->%12.2i<--\n", 8375); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-10.5i<--\n", -216); // <-- i
	n___ = printf("-->%-10.5i<--\n", -216); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%8.7i<--\n", -8473); // <-- i
	n___ = printf("-->%8.7i<--\n", -8473); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%8.3i<--\n", -8473); // <-- i
	n___ = printf("-->%8.3i<--\n", -8473); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-5.0i<--\n", 0); // <-- i
	n___ = printf("-->%-5.0i<--\n", 0); // <-- i
	if (!test_check(n, n___))
		return (0);

	n = ft_printf("-->%-8.5i<--\n", 2); // <-- i
	n___ = printf("-->%-8.5i<--\n", 2); // <-- i
	if (!test_check(n, n___))
		return (0);
	
	n = ft_printf("-->%-5.i<--\n", 1); // <-- i
	n___ = printf("-->%-5.i<--\n", 1); // <-- i
	if (!test_check(n, n___))
		return (0);
	
	n = ft_printf("-->%-5.i<--\n", 0); // <-- i
	n___ = printf("-->%-5.i<--\n", 0); // <-- i
	if (!test_check(n, n___))
		return (0);
	
	n = ft_printf("-->%5.i<--\n", 0); // <-- i
	n___ = printf("-->%5.i<--\n", 0); // <-- i
	if (!test_check(n, n___))
		return (0);
	
	n = ft_printf("-->%-+7.5i<--\n", 123); // <-- i
	n___ = printf("-->%-+7.5i<--\n", 123); // <-- i
	if (!test_check(n, n___))
		return (0);

	// n = ft_printf("-->%- 7.5i<--\n", 123); // <-- i
	// n___ = printf("-->%- 7.5i<--\n", 123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-+07.5i<--\n", 123); // <-- i (error: 0 with . and -)
	// n___ = printf("-->%-+07.5i<--\n", 123); // <-- i (error: 0 with . and -)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- 07.5i<--\n", 123); // <-- i (error: 0 with . and -)
	// n___ = printf("-->%- 07.5i<--\n", 123); // <-- i (error: 0 with . and -)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- +08.6i<--\n", 123); // <-- i (error: 0 with ., - and +)
	// n___ = printf("-->%- +08.6i<--\n", 123); // <-- i (error: 0 with ., - and +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%05.i<--\n", 123); // <-- i (error: 0 with .)
	// n___ = printf("-->%05.i<--\n", 123); // <-- i (error: 0 with .)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%i<--\n", -123); // <-- i
	// n___ = printf("-->%i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->% i<--\n", -123); // <-- i
	// n___ = printf("-->% i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%+i<--\n", -123); // <-- i
	// n___ = printf("-->%+i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%+ i<--\n", -123); // <-- i (error: space with +)
	// n___ = printf("-->%+ i<--\n", -123); // <-- i (error: space with +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%#+ i<--\n", -123); // <-- i (error: #)
	// n___ = printf("-->%#+ i<--\n", -123); // <-- i (error: #)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%05i<--\n", -123); // <-- i
	// n___ = printf("-->%05i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%.5i<--\n", -123); // <-- i
	// n___ = printf("-->%.5i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-05i<--\n", -123); // <-- i (error: 0 with -)
	// n___ = printf("-->%-05i<--\n", -123); // <-- i (error: 0 with -)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-.5i<--\n", -123); // <-- i
	// n___ = printf("-->%-.5i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%7.5i<--\n", -123); // <-- i
	// n___ = printf("-->%7.5i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-7.5i<--\n", -123); // <-- i
	// n___ = printf("-->%-7.5i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-+7.5i<--\n", -123); // <-- i
	// n___ = printf("-->%-+7.5i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- 7.5i<--\n", -123); // <-- i
	// n___ = printf("-->%- 7.5i<--\n", -123); // <-- i
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%-+07.5i<--\n", -123); // <-- i (error: 0 with . and -)
	// n___ = printf("-->%-+07.5i<--\n", -123); // <-- i (error: 0 with . and -)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- 07.5i<--\n", -123); // <-- i (error: 0 with . and -)
	// n___ = printf("-->%- 07.5i<--\n", -123); // <-- i (error: 0 with . and -)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- +08.6i<--\n", -123); // <-- i (error: 0 with ., - and +)
	// n___ = printf("-->%- +08.6i<--\n", -123); // <-- i (error: 0 with ., - and +)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%05.i<--\n", -123); // <-- i (error: 0 with .)
	// n___ = printf("-->%05.i<--\n", -123); // <-- i (error: 0 with .)
	// if (!test_check(n, n___))
	// 	return (0);

	// n = ft_printf("-->%- +08.6i<--\n", 0); // <-- i (error: 0 with ., - and +)
	// n___ = printf("-->%- +08.6i<--\n", 0); // <-- i (error: 0 with ., - and +)
	// if (!test_check(n, n___))
	// 	return (0);
	printf("<-- i --|\n");
	return (1);
}
