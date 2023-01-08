/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_cspd_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:48:49 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/08 22:19:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_c_bonus(int c, int i, char flag, int n)
{
	if (i == 1)
		i--;
	if (flag == '-')
	{
		i = ft_found_c(c, i);
		while (n-- > 1)
			i = ft_found_c(' ', i);
	}
	else if (flag == '0' || flag == ' ')
	{
		while (n-- > 1)
			i = ft_found_c(' ', i);
		i = ft_found_c(c, i);
	}
	else
		i = ft_found_c(c, i);
	return (i);
}

int	ft_found_s_bonus(char *s, int i, char flag, int n)
{
	int	len;
	int	dot_i;

	dot_i = 0;
	if (i == 1)
		i--;
	if (!s && flag == '-')
		i = ft_found_s("(null)", 0) + ft_flagf_bonus(6, n, ' ', 0);
	else if (!s && flag == '.' && n >= 6)
		i = ft_found_s("(null)", 0);
	else if (!s && flag != '.')
		i = ft_flagf_bonus(6, n, ' ', 0) + ft_found_s("(null)", 0);
	else if (s)
	{
		len = ft_strlen_bonus(s);
		if (flag == '-' && n != 0)
			i = ft_found_s(s, i) + ft_flagf_bonus(len, n , ' ', i);
		else if (flag == '.')
			while (s[dot_i] && dot_i < n)
				i = ft_found_c(s[dot_i++], i);
		else if (flag == ' ')
			i = ft_flagf_bonus(len, n, ' ', i) + ft_found_s(s, i);
		else if (n != 0)
			i = ft_found_s(s, i);
	}
	return (i);
}

int	ft_found_p_bonus(size_t p, int i, char flag, int n)
{
	int	len;

	if (!p && n == 0)
		return (ft_found_s("(nil)", i));
	len = 2;
	len = ft_p_len_bonus(p, len);
	if (i == 1)
		write(1, " ", 1);
	if (flag == '-')
	{
		if (!p)
			i = ft_found_p(p, i) + ft_flagf_bonus(len, n - 2, ' ', i);
		else
			i = ft_found_p(p, i) + ft_flagf_bonus(len, n, ' ', i);
	}
	else
	{
		if (!p)
			i = ft_flagf_bonus(len, n - 2, ' ', i) + ft_found_p(p, i);
		else
			i = ft_flagf_bonus(len, n, ' ', i) + ft_found_p(p, i);
	}
	return (i);
}

int	ft_p_len_bonus(size_t hex, int len)
{
	if (hex == 0)
		len++;
	else if (hex >= 16)
	{
		len = ft_p_len_bonus(hex / 16, len);
		len = ft_p_len_bonus(hex % 16, len);
	}
	else
		len++;
	return (len);
}

int	ft_found_i_plus_d_bonus(int d, int i, char flag, int n)
{
	char	*d_;
	int		len;

	if ((!d || d == 0) && n == 0 && flag == '.')
		return (i);
	d_ = ft_itoa_bonus(d);
	len = ft_strlen_bonus(d_);
	if (i == 1 && (d >= 0))
		write(1, " ", 1);
	else if (i == 1)
		i--;
	if (flag == '0' || flag == '.')
	{
		if (d < 0 || d == -2147483648)
			i = ft_print_minusd_bonus(d_, n, flag, i);
		else
			i += ft_flagf_bonus(len, n, '0', 0) + ft_found_i_plus_d(d, 0);
	}
	else if (flag == '-')
		i += ft_found_i_plus_d(d, 0) + ft_flagf_bonus(len, n, ' ', 0);
	else if (flag == ' ')
		i += ft_flagf_bonus(len, n, ' ', 0) + ft_found_i_plus_d(d, 0);
	free(d_);
	return (i);
}
