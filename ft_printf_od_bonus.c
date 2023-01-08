/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_od_bonus .c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:17:07 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/07 21:36:07 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_others_bonus(const char *f, va_list args, int i);

int	ft_printf_od_bonus(const char format, va_list args, int i)
{
	if (format == 'c')
		i = ft_found_c(va_arg(args, int), i);
	else if (format == 's')
		return (i);
	else if (format == 'p')
		i = ft_found_s("(nil)", i);
	else if (format == 'd' || format == 'i')
		return (i);
	else if (format == 'u')
		return (i);
	else if (format == 'x')
		return (i);
	else if (format == 'X')
		return (i);
	else if (format == '%')
		i = ft_found_c('%', i);
	else
		i = -1;
	return (i);
}

// int	ft_printd_ad_bonus(const char *f, va_list args, int j, int i)
// {
// 	int		k;
// 	int		n;
// 	int		n_;
// 	char	*a;

// 	k = ft_check_bonus(f, j, "-0123456789.# +") + j;
// 	n = ft_checknum_bonus(f, j, "123456789", k) + j;
// 	n_ = ft_checknum_bonus(f, j, "0123456789", k) + j;
// 	while (n_++ < k - 1)
// 		if (f[n_] == '.' && f[k - 1] != '.')
// 			return (i + ft_found_md_bonus(f, args, j, n_));
// 	a = ft_m_bonus((char *)malloc((k - n) * sizeof(char)), f, n, k - n - 1);
// 	while (j <= n--)
// 		if (f[n] == '-' || f[n] == '0' || f[n] == '.' || f[n] == '#')
// 			return (i + ft_found_mnd_ad_bonus(f, args, a, j));
// 	return (i + ft_not_found_mnd_ad_bonus(f, args, a, j));
// }

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
