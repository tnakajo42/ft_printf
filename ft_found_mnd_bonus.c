/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_mnd_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:41:12 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/02 22:30:43 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_mnd_bonus(const char *format, va_list args, char *a, int j)
{
	int	i;
	int	k;

	i = 0;
	k = ft_check_bonus(format, j, "-0123456789.# +") + j;
	while (format[j] && j < k)
	{
		if (format[j] == ' ')
			i = 1;
		if (format[j] == '-')
			return (ft_found_minus_bonus(format[k], args, a, i));
		if (format[j] == '0')
			return (ft_found_zero_bonus(format[k], args, a, i));
		if (format[j] == '.')
			return (ft_found_dot_bonus(format[k], args, a, i));
		j++;
	}
	return (i);
}

int	ft_not_found_mnd_bonus(const char *format, va_list args, char *a, int j)
{
	int	i;
	int	k;

	i = 0;
	k = ft_check_bonus(format, j, "-0123456789.# +") + j;
	while (format[j] && j < k)
	{
		if (format[j] == ' ')
			i = 1;
		j++;
	}
	if (format[k] == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, ' ', ft_atoi_bonus((char *)a));
	if (format[k] == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, ' ', ft_atoi_bonus((char *)a));
	if (format[k] == 'p')
		i = ft_found_p_bonus(va_arg(args, unsigned long long), i, ' ', ft_atoi_bonus((char *)a));
	if (format[k] == 'd' || format[k] == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, ' ', ft_atoi_bonus((char *)a));
	if (format[k] == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, ' ', ft_atoi_bonus((char *)a));
	if (format[k] == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, ' ', ft_atoi_bonus((char *)a));
	if (format[k] == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, ' ', ft_atoi_bonus((char *)a));
	free(a);
	return (i);
}

int	ft_found_minus_bonus(const char format, va_list args, char *a, int i)
{
	if (format == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, '-', ft_atoi_bonus((char *)a));
	if (format == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, '-', ft_atoi_bonus((char *)a));
	if (format == 'p')
		i = ft_found_p_bonus(va_arg(args, unsigned long long), i, '-', ft_atoi_bonus((char *)a));
	if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, '-', ft_atoi_bonus((char *)a));
	if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '-', ft_atoi_bonus((char *)a));
	if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '-', ft_atoi_bonus((char *)a));
	if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '-', ft_atoi_bonus((char *)a));
	free(a);
	return (i);
}

int	ft_found_zero_bonus(const char format, va_list args, char *a, int i)
{
	if (format == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, '0', ft_atoi_bonus((char *)a));
	if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, '0', ft_atoi_bonus((char *)a));
	if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '0', ft_atoi_bonus((char *)a));
	if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '0', ft_atoi_bonus((char *)a));
	if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '0', ft_atoi_bonus((char *)a));
	free(a);
	return (i);
}

int	ft_found_dot_bonus(const char format, va_list args, char *a, int i)
{
	if (format == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, '.', ft_atoi_bonus((char *)a));
	if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, '.', ft_atoi_bonus((char *)a));
	if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '.', ft_atoi_bonus((char *)a));
	if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '.', ft_atoi_bonus((char *)a));
	if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '.', ft_atoi_bonus((char *)a));
	free(a);
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
