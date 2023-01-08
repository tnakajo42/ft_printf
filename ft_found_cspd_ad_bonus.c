/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_cspd_ad_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:00:01 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/08 18:13:14 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_found_s_ad_bonus(char *s, int i, char flag, int n)
{
	if (i == 1)
		i--;
	if (!s && flag == '-')
		i = ft_flagf_bonus(0, n, ' ', 0);
	else if (!s)
		i = ft_flagf_bonus(0, n, ' ', 0);
	else
		i = ft_flagf_bonus(0, n, ' ', 0);
	return (i);
}

/* int	ft_found_s_ad_mi_bonus(char *s, int i, char flag, int n)
{
	if (i == 1)
		i--;
	if (!s && flag == '-')
		i = ft_flagf_bonus(0, n, ' ', 0);
	else if (!s)
		i = ft_flagf_bonus(0, n, ' ', 0);
	else
		i = ft_flagf_bonus(0, n, ' ', 0);
	return (i);
} */


/* int	ft_found_p_bonus(size_t p, int i, char flag, int n)
{
	int	len;

	len = 2;
	len = ft_p_len_bonus(p, len);
	if (i == 1)
		write(1, " ", 1);
	if (flag == '-')
		i = ft_found_p(p, i) + ft_flagf_bonus(len, n, ' ', i);
	else
		i = ft_flagf_bonus(len, n, ' ', i) + ft_found_p(p, i);
	return (i);
} */

/* int	ft_p_len_bonus(size_t hex, int len)
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
} */

int	ft_found_i_plus_d_ad_bonus(int d, int i, char flag, int n)
{
	if (d == 0)
	{
		i = ft_flagf_bonus(0, n, ' ', i);
		return (i);
	}
	return (ft_found_i_plus_d_bonus(d, i, flag, n));
}

/* int	ft_found_i_plus_d_ad_mi_bonus(int d, int i, char flag, int n)
{
	char	*d_;
	int		len;

	if (d == 0)
	{
		i = ft_flagf_bonus(0, n, ' ', i);
		return (i);
	}
	return (ft_found_i_plus_d_bonus(d, i, flag, n));
} */
