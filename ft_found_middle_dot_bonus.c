/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_middle_dot_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:20:40 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/04 20:29:22 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_md_bonus(const char f, va_list args, int b, int a);

int	ft_found_md_bonus(const char *f, va_list args, int j, int m)
{
	int		i;
	int		k;
	int		n;
	int		n_;
	char	*b;
	char	*a;

	k = ft_check_bonus(f, j, "-0123456789.# +") + j;
	n = ft_checknum_bonus(f, j, "123456789", k) + j;
	// if there is 0
	// n_ = ft_checknum_bonus(f, j, "0123456789", k) + j;
	b = ft_m_bonus((char *)malloc((n - m + 1) * sizeof(char)), f, n, m - n);
	m++;
	a = ft_m_bonus((char *)malloc((k - m) * sizeof(char)), f, m, k - m);
	i = ft_printf_md_bonus(f[k], args, ft_atoi_bonus(b), ft_atoi_bonus(a));
	free (b);
	free (a);
	// while (n < k)
	// {
	// 	if (f[j] == ' ')
	// 		i = 1;
	// 	if (f[j] == '-')
	// 		return (ft_found_minus_bonus(f[k], args, a, i));
	// 	if (f[j] == '0')
	// 		return (ft_found_zero_bonus(f[k], args, a, i));
	// 	if (f[j] == '.')
	// 		return (ft_found_dot_bonus(f[k], args, a, i));
	// 	if (f[j] == '#')
	// 		return (ft_found_sharp_bonus(f[k], args, a, i));
	// 	j++;
	// }
	// printf("\n");
	return (i);
}

static int	ft_printf_md_bonus(const char f, va_list args, int b, int a)
{
	int	i;

	i = 0;
	if (f == 'c')
		i = ft_found_c_md_bonus(va_arg(args, int), b, a, ' ');
	else if (f == 's')
		i = ft_found_s_md_bonus(va_arg(args, char *), b, a, ' ');
	else if (f == 'p')
		i = ft_found_p_md_bonus(va_arg(args, unsigned long long), b, a, ' ');
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_md_bonus(va_arg(args, int), b, a, ' ');
	else if (f == 'u')
		i = ft_found_u_md_bonus(va_arg(args, unsigned int), b, a, ' ');
	else if (f == 'x')
		i = ft_found_x_md_bonus(va_arg(args, size_t), b, a, ' ');
	else if (f == 'X')
		i = ft_found_bigx_md_bonus(va_arg(args, size_t), b, a, ' ');
	else if (f == '%')
		i = ft_found_c_bonus('%', i, ' ', 0);
	else
		i++;
	return (i);
}
