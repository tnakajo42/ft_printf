/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flagf_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:28:49 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/11 19:58:59 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flagf_bonus(int len, int n, char flag, int i)
{
	while (len < n--)
		i = ft_found_c(flag, i);
	return (i);
}

int	ft_print_minusd_bonus(char *d_, int n, char flag, int i)
{
	int	d_i;
	int	len;

	d_i = 1;
	len = ft_strlen_bonus(d_);
	if (flag == 'Z')
		i = ft_flagf_bonus(len, n++, ' ', i) + ft_found_c('-', i);
	else
	{
		i = ft_found_c('-', i);
		if (flag == '.')
			n++;
		i = ft_flagf_bonus(len, n, '0', i);
	}
	while (d_[d_i])
		i = ft_found_c(d_[d_i++], i);
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
