/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ad_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:55:14 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/07 19:17:11 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_others_bonus(const char *f, va_list args, int i);

int	ft_found_minus_ad_bonus(const char format, va_list args, char *a, int i)
{
	int	n;

	n = ft_atoi_bonus((char *)a);
	if (format == 'c')
		i = ft_found_c_bonus(va_arg(args, int), i, '-', n);
	else if (format == 's')
		i = ft_found_s_ad_mi_bonus(va_arg(args, char *), i, '-', n);
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

int	ft_printd_ad_bonus(const char *f, va_list args, int j, int i)
{
	int		k;
	int		n;
	int		n_;
	char	*a;

	k = ft_check_bonus(f, j, "-0123456789.# +") + j;
	n = ft_checknum_bonus(f, j, "123456789", k) + j;
	n_ = ft_checknum_bonus(f, j, "0123456789", k) + j;
	while (n_++ < k - 1)
		if (f[n_] == '.' && f[k - 1] != '.')
			return (i + ft_found_md_bonus(f, args, j, n_));
	a = ft_m_bonus((char *)malloc((k - n) * sizeof(char)), f, n, k - n - 1);
	while (j <= n--)
		if (f[n] == '-' || f[n] == '0' || f[n] == '.' || f[n] == '#')
			return (i + ft_found_mnd_ad_bonus(f, args, a, j));
	return (i + ft_not_found_mnd_ad_bonus(f, args, a, j));
}

// static int	ft_others_bonus(const char *f, va_list args, int i)
// {
// 	if (*f == 'c')
// 		i = ft_found_c(va_arg(args, int), i);
// 	else if (*f == 's')
// 		i = ft_found_s(va_arg(args, char *), i);
// 	else if (*f == 'p')
// 		i = ft_found_p(va_arg(args, unsigned long long), i);
// 	else if (*f == 'd' || *f == 'i')
// 		i = ft_found_i_plus_d(va_arg(args, int), i);
// 	else if (*f == 'u')
// 		i = ft_found_u(va_arg(args, unsigned int), i);
// 	else if (*f == 'x')
// 		i = ft_found_x(va_arg(args, size_t), i);
// 	else if (*f == 'X')
// 		i = ft_found_bigx(va_arg(args, size_t), i);
// 	else if (*f == '%')
// 		i = ft_found_c('%', i);
// 	else
// 		i = -1;
// 	return (i);
// }
