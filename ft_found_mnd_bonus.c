/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_mnd_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:41:12 by tnakajo           #+#    #+#             */
/*   Updated: 2022/12/31 18:31:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_found_minus_bonus(const char format, va_list args, int i)
{
	if (format == 'c')
		return (ft_found_c(va_arg(args, int), i));
	else if (format == 's')
		return (ft_found_s(va_arg(args, char *), i));
	else if (format == 'p')
		return (ft_found_p(va_arg(args, unsigned long long), i));
	else if (format == 'd' || format == 'i')
		return (ft_found_i_plus_d(va_arg(args, int), i));
	else if (format == 'u')
		return (ft_found_u(va_arg(args, unsigned int), i));
	else if (format == 'x')
		return (ft_found_x(va_arg(args, size_t), i));
	else if (format == 'X')
		return (ft_found_bigx(va_arg(args, size_t), i));
	else
		return (i);
}

int	ft_found_zero_bonus(const char format, va_list args, int i)
{
	if (format == 's')
		return (ft_found_s(va_arg(args, char *), i));
	else if (format == 'd' || format == 'i')
		return (ft_found_i_plus_d(va_arg(args, int), i));
	else if (format == 'u')
		return (ft_found_u(va_arg(args, unsigned int), i));
	else if (format == 'x')
		return (ft_found_x(va_arg(args, size_t), i));
	else if (format == 'X')
		return (ft_found_bigx(va_arg(args, size_t), i));
	else
		return (i);
}

int	ft_found_dot_bonus(const char format, va_list args, int i)
{
	if (format == 'd' || format == 'i')
		return (ft_found_i_plus_d(va_arg(args, int), i));
	else if (format == 'u')
		return (ft_found_u(va_arg(args, unsigned int), i));
	else if (format == 'x')
		return (ft_found_x(va_arg(args, size_t), i));
	else if (format == 'X')
		return (ft_found_bigx(va_arg(args, size_t), i));
	else
		return (i);
}

/* int	main(void)
{
	int	i = 0;

	// printf("____-minus-____\n");
	// i = ft_printf("%-ca%c\n", 'Z', 'z');
	// printf("%d\n", i);
	// i = printf("%-ca%c\n", 'Z', 'z');
	// printf("%d\n", i);
	// printf("____d and i____\n");
	// i = ft_printf("%-c, %-c\n", '0', '0' - 256);
	// printf("%d\n", i);
	// i = printf("%-c, %-c\n", '0', '0' - 256);
	// printf("%d\n", i);

	// printf("____0zero0____\n");
	// i = ft_printf("%0da%d\n", 20, -30);
	// printf("%d\n", i);
	// i = printf("%0da%d\n", 20, -30);
	// printf("%d\n", i);

	printf("____.dot.____\n");
	i = ft_printf(" %.2s %.1s ", "", "-");
	printf("%d\n", i);
	i = printf(" %.2s %.1s ", "", "-");
	printf("%d\n", i);
	
	return (0);
} */
