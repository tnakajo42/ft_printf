/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mnd_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:15:54 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/07 23:06:32 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_minus_bonus(const char format, va_list args, char *a, int i)
{
	int	n;

	n = ft_atoi_bonus((char *)a);
	if (format == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, '-', n);
	else if (format == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, '-', n);
	else if (format == 'p')
		i = ft_found_p_bonus(va_arg(args, unsigned long long), i, '-', n);
	else if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, '-', n);
	else if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '-', n);
	else if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '-', n);
	else if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '-', n);
	else if (format == '%')
		i = ft_found_c_bonus('%', i, '-', 0);
	else
		i++;
	free(a);
	return (i);
}

/* int	ft_found_minus_ad_bonus(const char format, va_list args, char *a, char i)
{
	int	n;

	n = ft_atoi_bonus((char *)a);
	if (format == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, '-', n);
	else if (format == 's')
		i = ft_found_s_ad_bonus(va_arg(args, char *), i, '-', n);
	else if (format == 'p')
		i = ft_found_p_bonus(va_arg(args, unsigned long long), i, '-', n);
	else if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, '-', n);
	else if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '-', n);
	else if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '-', n);
	else if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '-', n);
	else if (format == '%')
		i = ft_found_c_bonus('%', i, '-', 0);
	else
		i++;
	free(a);
	return (i);
} */

int	ft_found_dot_mi_bonus(const char format, va_list args, char *a, int i)
{
	int	n;

	n = ft_atoi_bonus((char *)a);
	if (n == 0)
		i = ft_printf_od_bonus(format, args, i);
	else if (format == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, '-', n);
	else if (format == 's')
		i = ft_found_s_mi_bonus(va_arg(args, char *), i, n);
	else if (format == 'p')
		i = ft_found_p_bonus(va_arg(args, unsigned long long), i, '-', n);
	else if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_mi_bonus(va_arg(args, int), i, n);
	else if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '-', n);
	else if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '-', n);
	else if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '-', n);
	else if (format == '%')
		i = ft_found_c_bonus('%', i, '-', 0);
	else
		i++;
	free(a);
	return (i);
}

int	ft_found_zero_bonus(const char format, va_list args, char *a, int i)
{
	int	n;

	n = ft_atoi_bonus((char *)a);
	if (n == 0)
		i = ft_printf_od_bonus(format, args, i);
	if (format == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, '0', n);
	else if (format == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, '0', n);
	else if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, '0', n);
	else if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '0', n);
	else if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '0', n);
	else if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '0', n);
	else if (format == '%')
		i = ft_found_c_bonus('%', i, '0', 0);
	else
		i++;
	free(a);
	return (i);
}

int	ft_found_dot_bonus(const char format, va_list args, char *a, int i)
{
	int	n;

	n = ft_atoi_bonus((char *)a);
	if (n == 0)
		i = ft_printf_od_bonus(format, args, i);
	else if (format == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, '.', n);
	else if (format == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, '.', n);
	else if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, '.', n);
	else if (format == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, '.', n);
	else if (format == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, '.', n);
	else if (format == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, '.', n);
	else if (format == '%')
		i = ft_found_c_bonus('%', i, '.', 0);
	else
		i++;
	free(a);
	return (i);
}
