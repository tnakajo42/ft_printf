/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:30:31 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/03 22:45:58 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

/* int	main(void)
{
	int	i;
	// char *test;
	i = 0;
	// test = "test";

	// printf("____%% -3c____\n");
	// i = ft_printf("*% -3c*\n", 'A');
	// printf("%d\n", i);
	// i = printf("*% -3c*\n", 'A');
	// printf("%d\n", i);
	// printf("____%% 03c____\n");
	// i = ft_printf("*% 03c*\n", 'A');
	// printf("%d\n", i);
	// i = printf("*% 03c*\n", 'A');
	// printf("%d\n", i);
	// printf("____%% .3c____\n");
	// i = ft_printf("*% .3c*\n", 'A');
	// printf("%d\n", i);
	// i = printf("*% .3c*\n", 'A');
	// printf("%d\n", i);
	// printf("____%% 3c____\n");
	// i = ft_printf("*% 3c*\n", 'A');
	// printf("%d\n", i);
	// i = printf("*% 3c*\n", 'A');
	// printf("%d\n", i);
	// printf("____%% #3c____\n");
	// i = ft_printf("*% #3c*\n", 'A');
	// printf("%d\n", i);
	// i = printf("*% #3c*\n", 'A');
	// printf("%d\n", i);
	// printf("____%% +3c____\n");
	// i = ft_printf("*% +3c*\n", 'A');
	// printf("%d\n", i);
	// i = printf("*% +3c*\n", 'A');
	// printf("%d\n", i);

	// printf("____%% -3s____\n");
	// i = ft_printf("*% -3s*\n", test);
	// printf("%d\n", i);
	// i = printf("*% -3s*\n", test);
	// printf("%d\n", i);
	// printf("____%% 03s____\n");
	// i = ft_printf("*% 03s*\n", test);
	// printf("%d\n", i);
	// i = printf("*% 03s*\n", test);
	// printf("%d\n", i);
	// printf("____%% .3s____\n");
	// i = ft_printf("*% .3s*\n", test);
	// printf("%d\n", i);
	// i = printf("*% .3s*\n", test);
	// printf("%d\n", i);
	// printf("____%% 3s____\n");
	// i = ft_printf("*% 3s*\n", test);
	// printf("%d\n", i);
	// i = printf("*% 3s*\n", test);
	// printf("%d\n", i);
	// printf("____%% #3s____\n");
	// i = ft_printf("*% #3s*\n", test);
	// printf("%d\n", i);
	// i = printf("*% #3s*\n", test);
	// printf("%d\n", i);
	// printf("____%% +3s____\n");
	// i = ft_printf("*% +3s*\n", test);
	// printf("%d\n", i);
	// i = printf("*% +3s*\n", test);
	// printf("%d\n", i);

	// printf("____%% -3u____\n");
	// i = ft_printf("*% -3u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% .3u*\n", 123);
	// printf("%d\n", i);
	// printf("____%% 03u____\n");
	// i = ft_printf("*% 03u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% .3u*\n", 123);
	// printf("%d\n", i);
	// printf("____%% .3u____\n");
	// i = ft_printf("*% .3u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% .3u*\n", 123);
	// printf("%d\n", i);
	// printf("____%% 3u____\n");
	// i = ft_printf("*% 3u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% 3u*\n", 123);
	// printf("%d\n", i);
	// printf("____%% #3u____\n");
	// i = ft_printf("*% #3u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% #3u*\n", 123);
	// printf("%d\n", i);
	// printf("____%% +3u____\n");
	// i = ft_printf("*% +3u*\n", 123);
	// printf("%d\n", i);
	// i = printf("*% +3u*\n", 123);
	// printf("%d\n", i);

	// printf("____%% -3d____\n");
	// i = ft_printf("*% -3d*\n", -2);
	// printf("%d\n", i);
	// i = printf("*% -3d*\n", -2);
	// printf("%d\n", i);
	// printf("____%% 03d____\n");
	// i = ft_printf("*% 03d*\n", -2);
	// printf("%d\n", i);
	// i = printf("*% 03d*\n", -2);
	// printf("%d\n", i);
	// printf("____%% .3d____\n");
	// i = ft_printf("*% .3d*\n", -2);
	// printf("%d\n", i);
	// i = printf("*% .3d*\n", -2);
	// printf("%d\n", i);
	// printf("____%% 3d____\n");
	// i = ft_printf("*% 3d*\n", -2);
	// printf("%d\n", i);
	// i = printf("*% 3d*\n", -2);
	// printf("%d\n", i);
	// i = ft_printf("*%3d*\n", -2);
	// printf("%d\n", i);
	// i = printf("*%3d*\n", -2);
	// printf("%d\n", i);

	// printf("____%%-3u____\n");
	// i = ft_printf("*%-3u*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%-3u*\n", 2);
	// printf("%d\n", i);
	// printf("____%%03u____\n");
	// i = ft_printf("*%03u*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%03u*\n", 2);
	// printf("%d\n", i);
	// printf("____%%.3u____\n");
	// i = ft_printf("*%.3u*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%.3ud*\n", 2);
	// printf("%d\n", i);
	// printf("____%%3u____\n");
	// i = ft_printf("*%3u*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%3u*\n", 2);
	// printf("%d\n", i);

	// printf("____%%-30x____\n");
	// i = ft_printf("*%-30x*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%-30x*\n", 2);
	// printf("%d\n", i);
	// printf("____%%030x____\n");
	// i = ft_printf("*%030x*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%030x*\n", 2);
	// printf("%d\n", i);
	// printf("____%%.30x____\n");
	// i = ft_printf("*%.30x*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%.30x*\n", 2);
	// printf("%d\n", i);
	// printf("____%%30x____\n");
	// i = ft_printf("*%30x*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%30x*\n", 2);
	// printf("%d\n", i);
	// printf("____%%#30x____\n");
	// i = ft_printf("*%#30x*\n", 123);
	// printf("%d\n", i);
	// i = printf("*%#30x*\n", 123);
	// printf("%d\n", i);
	// printf("____%%+30x____\n");
	// i = ft_printf("*%+30x*\n", 123);
	// printf("%d\n", i);
	// i = printf("*%+30x*\n", 123); // error
	// printf("%d\n", i);
	// printf("____%%#x____\n");
	// i = ft_printf("*%#x*\n", 123);
	// printf("%d\n", i);
	// i = printf("*%#x*\n", 123);
	// printf("%d\n", i);

	// printf("____%%-30X____\n");
	// i = ft_printf("*%-30X*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%-30X*\n", 2);
	// printf("%d\n", i);
	// printf("____%%030X____\n");
	// i = ft_printf("*%030X*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%030X*\n", 2);
	// printf("%d\n", i);
	// printf("____%%.30X____\n");
	// i = ft_printf("*%.30X*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%.30X*\n", 2);
	// printf("%d\n", i);
	// printf("____%%30X____\n");
	// i = ft_printf("*%30X*\n", 2);
	// printf("%d\n", i);
	// i = printf("*%30X*\n", 2);
	// printf("%d\n", i);
	// printf("____%%#30X____\n");
	// i = ft_printf("*%#30X*\n", 123);
	// printf("%d\n", i);
	// i = printf("*%#30X*\n", 123);
	// printf("%d\n", i);
	// printf("____%%+30X____\n");
	// i = ft_printf("*%+30X*\n", 123);
	// printf("%d\n", i);
	// i = printf("*%+30X*\n", 123); // error
	// printf("%d\n", i);
	// printf("____%%#X____\n");
	// i = ft_printf("*%#X*\n", 123);
	// printf("%d\n", i);
	// i = printf("*%#X*\n", 123);
	// printf("%d\n", i);

	// int *delete_this;
	// delete_this = (int *)malloc(10444000000);
	i = ft_printf("%i\n", 1000);
	printf("%d\n", i);
	i = printf("%i\n", 1000);
	printf("%d\n", i);
	// free (delete_this);
	// i = ft_printf("%#5%\n");
	// printf("%d\n", i);
	// i = printf("%#5%\n");
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
} */
