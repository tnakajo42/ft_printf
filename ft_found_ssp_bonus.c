/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_ssp_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 00:26:55 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/01 16:06:54 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_found_sharp_bonus(const char format, va_list args, int i)
{
	unsigned int	x;

	x = (unsigned int)va_arg(args, size_t);
	if (x != 0)
	{
		i = i + 2;
		if (format == 'x')
			write(1, "0x", 2);
		else
			write(1, "0X", 2);
	}
	if (format == 'x')
		i = ft_found_x(x, i);
	else
		i = ft_found_bigx(x, i);
	return (i);
}

int	ft_found_space_bonus(const char format, va_list args, int i)
{
	int		d;

	if (format == 's')
		i = ft_found_s(va_arg(args, char *), i);
	if (format == 'd' || format == 'i')
	{
		d = va_arg(args, int);
		if (d >= 0)
		{
			i++;
			write(1, " ", 1);
		}
		i = ft_found_i_plus_d(d, i);
	}
	return (i);
}

int	ft_found_plus_bonus(va_list args, int i)
{
	int	d;

	d = va_arg(args, int);
	if (d >= 0)
	{
		i++;
		write(1, "+", 1);
	}
	i = ft_found_i_plus_d(d, i);
	return (i);
}

/* int	main(void)
{
	int		i = 0;

	printf("____s plus 1___\n");
	i = ft_printf("a% 2sa\n", "a");
	printf("%d\n", i);
	i = printf("a% 2sa\n", "a");
	printf("%d\n", i);
	i = ft_printf("aa%1saa\n", "");
	printf("%d\n", i);
	i = printf("aa%1saa\n", "");
	printf("%d\n", i);
	printf("____s___\n");
	i = ft_printf("*%+ + s_% + s*\n", "abc", "v");
	printf("%d\n", i);
	i = printf("*%+ + s_% + s*\n", "abc", "v");
	printf("%d\n", i);
	printf("____d and i____\n");
	i = ft_printf(" % idd% d \n", -1, 100);
	printf("%d\n", i);
	i = printf(" % idd% d \n", -1, 100);
	printf("%d\n", i);
	return (0);
} */

/* int	main(void)
{
	int		i = 0;

	printf("____d and i____\n");
	i = ft_printf(" %+ +idd% + d \n", 1, 100);
	printf("%d\n", i);
	i = printf(" %+ +idd% + d \n", 1, 100);
	printf("%d\n", i);
	return (0);
} */
