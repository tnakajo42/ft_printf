/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_cspd_middle_dot_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:48:49 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/04 20:44:00 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_c_md_bonus(int c, int b, int a, char flag)
{
	int	i;

	i = ft_found_c_bonus(c, 0, flag, b);
	return (i);
}

int	ft_found_s_md_bonus(char *s, int b, int a, char flag)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen_bonus(s);
	while (len < b--)
		i += ft_found_c(' ', 0);
	while (a < len--)
		i += ft_found_c(' ', 0);
	while (s[j] && len-- >= 0)
		i += ft_found_c(s[j++], 0);
	return (i);
}

int	ft_found_p_md_bonus(size_t p, int b, int a, char flag)
{
	// int	len;

	// len = 2;
	// len = ft_p_len_bonus(p, len);
	// if (i == 1)
	// 	write(1, " ", 1);
	// if (flag == '-')
	// 	i = ft_found_p(p, i) + ft_flagf_bonus(len, n, ' ', i);
	// else
	// 	i = ft_flagf_bonus(len, n, ' ', i) + ft_found_p(p, i);
	// return (i);
	return (0);
}

int	ft_found_i_plus_d_md_bonus(int d, int b, int a, char flag)
{
	// char	*d_;
	// int		len;

	// d_ = ft_itoa_bonus(d);
	// len = ft_strlen_bonus(d_);
	// if (i == 1 && (d >= 0))
	// 	write(1, " ", 1);
	// else if (i == 1)
	// 	i--;
	// if (flag == '0' || flag == '.')
	// {
	// 	if (d < 0 || d == -2147483648)
	// 		i = ft_print_minusd_bonus(d_, n, flag, i);
	// 	else
	// 		i = ft_flagf_bonus(len, n, '0', i) + ft_found_i_plus_d(d, i);
	// }
	// else if (flag == '-')
	// 	i = ft_found_i_plus_d(d, i) + ft_flagf_bonus(len, n, ' ', i);
	// else if (flag == ' ')
	// 	i = ft_flagf_bonus(len, n, ' ', i) + ft_found_i_plus_d(d, i);
	// free(d_);
	// return (i);
	return (0);
}
