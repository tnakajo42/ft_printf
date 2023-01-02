/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:30:31 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/02 22:29:14 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	i;
	char *test;

	i = 0;
	test = "test";

	printf("____%% -3s____\n");
	i = ft_printf("*% -3s*\n", test);
	printf("%d\n", i);
	i = printf("*% -3s*\n", test);
	printf("%d\n", i);
	printf("____%% 03s____\n");
	i = ft_printf("*% 03s*\n", test);
	printf("%d\n", i);
	i = printf("*% 03s*\n", test);
	printf("%d\n", i);
	printf("____%% .3s____\n");
	i = ft_printf("*% .3s*\n", test);
	printf("%d\n", i);
	i = printf("*% .3s*\n", test);
	printf("%d\n", i);

	// printf("____%% -3p____\n");
	// i = ft_printf("*% -3u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% .3u*\n", 123);
	// printf("%d\n", i);
	// printf("____%% 03p____\n");
	// i = ft_printf("*% 03u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% .3u*\n", 123);
	// printf("%d\n", i);
	// printf("____%% .3p____\n");
	// i = ft_printf("*% .3u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% .3u*\n", 123);
	// printf("%d\n", i);

	// printf("____%% 3p____\n");
	// i = ft_printf("*%    -3d*\n", test);
	// printf("%d\n", i);
	// i = printf("*%    3p*\n", test);
	// printf("%d\n", i);
	// printf("____%%.s____\n");
	// i = ft_printf("% 1s", "ssss");
	// printf("%d\n", i);
	// i = printf("% 1s", "ssss");
	// printf("%d\n", i);
	return (0);
}
