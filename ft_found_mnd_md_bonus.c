/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_mnd_md_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:56:19 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/05 18:09:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* static int	ft_printf_not_mnd_bonus(const char f, va_list args, int i, int n); */

int	ft_m_md_bonus(const char f, va_list args, int b, int a)
{	
	int	i;

	i = 0;
	if (f == 'c')
		i = ft_found_c_md_bonus(va_arg(args, int), b, a, '-');
	else if (f == 's')
		i = ft_found_s_md_bonus(va_arg(args, char *), b, a, '-');
	else if (f == 'p')
		i = ft_found_p_md_bonus(va_arg(args, unsigned long long), b, a, '-');
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_md_bonus(va_arg(args, int), b, a, '-');
	else if (f == 'u')
		i = ft_found_u_md_bonus(va_arg(args, unsigned int), b, a, '-');
	else if (f == 'x')
		i = ft_found_x_md_bonus(va_arg(args, size_t), b, a, '-');
	else if (f == 'X')
		i = ft_found_bigx_md_bonus(va_arg(args, size_t), b, a, '-');
	else if (f == '%')
		i = ft_found_c_bonus('%', i, ' ', 0);
	else
		i++;
	return (i);
}

/* int	ft_not_found_mnd_bonus(const char *f, va_list args, char *a, int j)
{
	int	i;
	int	k;
	int	n;

	i = 0;
	k = ft_check_bonus(f, j, "-0123456789.# +") + j;
	n = ft_atoi_bonus((char *)a);
	while (f[j] && j < k)
	{
		if (f[j] == ' ')
			i = 1;
		j++;
	}
	i = ft_printf_not_mnd_bonus(f[k], args, i, n);
	free(a);
	return (i);
}

static int	ft_printf_not_mnd_bonus(const char f, va_list args, int i, int n)
{
	if (f == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, ' ', n);
	else if (f == 's')
		i = ft_found_s_bonus(va_arg(args, char *), i, ' ', n);
	else if (f == 'p')
		i = ft_found_p_bonus(va_arg(args, unsigned long long), i, ' ', n);
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_bonus(va_arg(args, int), i, ' ', n);
	else if (f == 'u')
		i = ft_found_u_bonus(va_arg(args, unsigned long long), i, ' ', n);
	else if (f == 'x')
		i = ft_found_x_bonus(va_arg(args, size_t), i, ' ', n);
	else if (f == 'X')
		i = ft_found_bigx_bonus(va_arg(args, size_t), i, ' ', n);
	else if (f == '%')
		i = ft_found_c_bonus('%', i, ' ', 0);
	else
		i++;
	return (i);
} */
