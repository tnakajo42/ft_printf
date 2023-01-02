/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_cspd_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:48:49 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/02 22:30:31 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_p_len_bonus(size_t hex, int len);

int	ft_found_c_bonus(int c, int i, char flag, int n)
{
	if (flag == '-')
	{
		i = ft_found_c(c, i);
		while (n-- > 1)
			i = ft_found_c(' ', i);
	}
	else
	{
		while (n-- > 1)
			i = ft_found_c(' ', i);
		i = ft_found_c(c, i);
	}
	return (i);
}

int	ft_found_s_bonus(char *s, int i, char flag, int n)
{
	int len;
	int dot_i;

	dot_i = 0;
	len = ft_strlen_bonus(s);
	if (i == 1)
		i--;
	if (flag == '-')
	{
		i = ft_found_s(s, i);
		while (len < n--)
			i = ft_found_c(' ', i);
	}
	else if (flag == '.')
	{
		while (dot_i < n && s[dot_i])
		{
			i = ft_found_c(s[dot_i], i);
			dot_i++;
		}
	}
	else if (flag == ' ')
	{
		while (len < n--)
			i = ft_found_c(' ', i);
		i = ft_found_s(s, i);
	}
	else
		i = ft_found_s(s, i);
	return (i);
}

static int	ft_p_len_bonus(size_t hex, int len)
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

int	ft_found_p_bonus(size_t p, int i, char flag, int n)
{
	int	len;

	len = 2;
	len = ft_p_len_bonus(p, len);
	if (i == 1)
		write(1, " ", 1);
	if (flag == '-')
	{
		i = ft_found_p(p, i);
		while (len < n--)
			i = ft_found_c(' ', i);
	}
	else
	{
		while (len < n--)
			i = ft_found_c(' ', i);
		i = ft_found_p(p, i);
	}
	return (i);
}

int	ft_found_i_plus_d_bonus(int d, int i, char flag, int n)
{
	char	*d_;
	int 	len;
	int		d_i;

	d_ = ft_itoa_bonus(d);
	len = ft_strlen_bonus(d_);
	d_i = 1;
	if (i == 1)
		write(1, " ", 1);
	if (flag == '-')
	{
		i = ft_found_i_plus_d(d, i);
		while (len < n--)
			i = ft_found_c(' ', i);
	}
	else if (flag == '0')
	{
		if (d < 0 || d == -2147483648)
		{
			i = ft_found_c('-', i);
			while (len < n--)
				i = ft_found_c('0', i);
			while (d_[d_i])
			{
				i = ft_found_c(d_[d_i], i);
				d_i++;
			}
		}
		else
		{
			while (len < n--)
				i = ft_found_c('0', i);
			i = ft_found_i_plus_d(d, i);
		}
	}
	else if (flag == '.')
	{
		if (d < 0 || d == -2147483648)
		{
			i = ft_found_c('-', i);
			while (len - 1 < n--)
				i = ft_found_c('0', i);
			while (d_[d_i])
			{
				i = ft_found_c(d_[d_i], i);
				d_i++;
			}
		}
		else
		{
			while (len < n--)
				i = ft_found_c('0', i);
			i = ft_found_i_plus_d(d, i);
		}
	}
	free(d_);
	return (i);
}
