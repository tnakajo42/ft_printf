/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flagf_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:28:49 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/03 22:13:14 by tnakajo          ###   ########.fr       */
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
	i = ft_found_c('-', i);
	if (flag == '.')
		n++;
	i = ft_flagf_bonus(len, n, '0', i);
	while (d_[d_i])
		i = ft_found_c(d_[d_i++], i);
	return (i);
}
