/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_cspd_md_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:48:49 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/07 15:44:18 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_found_c_md_bonus(int c, int b, int a, char flag)
int	ft_found_c_md_bonus(int c, int b, char flag)
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
	if (!s && a >= 6 && flag == '-')
		i = ft_found_s("(null)", 0) + ft_flagf_bonus(6, b, ' ', 0);
	else if (!s && flag == '-')
		i = ft_flagf_bonus(0, b, ' ', 0);
	else if (!s && a >= 6)
		i = ft_flagf_bonus(6, b, ' ', 0) + ft_found_s("(null)", 0);
	else if (!s)
		i = ft_flagf_bonus(0, b, ' ', 0);
	else
	{
		len = ft_strlen_bonus(s);
		j = 0;
		if (flag == '-')
		{
			while (s[j] && a-- > 0)
				i = ft_found_c(s[j++], i);
			while ((b--) - j > 0)
				i = ft_found_c(' ', i);
			i = ft_flagf_bonus(len, b, ' ', i);
		}
		else
		{
			i = ft_flagf_bonus(len, b, ' ', 0);
			while (a < len--)
				if (len < b)
					i = ft_found_c(' ', i);
			while (s[j] && len-- >= 0)
				i = ft_found_c(s[j++], i);
		}
	}
	return (i);
}

int	ft_found_p_md_bonus(size_t p, int b, int a, char flag)
{
	int	i;
	int	len;

	if (!p && flag == '-')
		i = ft_found_p(p, 0) + ft_flagf_bonus(5, b, ' ', 0);
	else if (!p && flag == ' ')
		i = ft_flagf_bonus(5, b, ' ', 0) + ft_found_p(p, 0);
	else
	{
		i = 0;
		len = ft_p_len_bonus(p, i);
		if (flag == '+')
		{
			b--;
			i = ft_found_c('+', i);
		}
		if (flag == '-')
		{
			i = ft_found_s("0x", i);
			i += ft_flagf_bonus(len, a, '0', 0) + ft_to_hex(p, 0);
		}
		if (len < b)
			while (len < b-- - 2 && a < b - 1)
				i = ft_found_c(' ', i);
		if (flag != '-')
		{
			i = ft_found_s("0x", i);
			i += ft_flagf_bonus(len, a, '0', 0) + ft_to_hex(p, 0);
		}
	}
	return (i);
}

int	ft_found_i_plus_d_md_bonus(int d, int b, int a, char flag)
{
	int		i;
	char	*d_;
	int		len;
	int		b_;

	i = 0;
	d_ = ft_itoa_bonus(d);
	len = ft_strlen_bonus(d_);
	b_ = b;
	if (flag == '+')
		b_--;
	if (len > a)
		i = ft_flagf_bonus(len, b_, ' ', i);
	if (flag == '+')
		i = ft_found_c(flag, i);
	if (flag == ' ')
		i = ft_found_c(flag, i);
	if (len < a)
	{
		i = ft_flagf_bonus(a, b, ' ', i) + ft_flagf_bonus(len, a, '0', i);
	}
	i = ft_found_i_plus_d(d, i);
	return (i);
}
