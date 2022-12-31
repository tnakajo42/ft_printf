/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 15:55:14 by tnakajo           #+#    #+#             */
/*   Updated: 2022/12/31 18:38:45 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf_bonus(const char *f, va_list args, int j, int i)
{
	int		j_;
	int		k;
	int		bonus_len;

	j_ = j;
	bonus_len = ft_check_bonus(f, j, "-0123456789.# +");
	k = j + bonus_len;
	while (f[j])
	{
		if (f[j] == '#' && (f[k] == 'x' || f[k] == 'X'))
			return (ft_found_sharp_bonus(f[k], args, i));
		if (f[j] == '+' && (f[k] == 'd' || f[k] == 'i'))
			return (ft_found_plus_bonus(args, i));
		if (f[j] == '0' && (f[k] == 'd' || f[k] == 'i' || f[k] == 'u' || f[k] == 'x' || f[k] == 'X'))
			return (ft_found_zero_bonus(f[k], args, i));
		if (f[j] == '.' && (f[k] == 'd' || f[k] == 'i' || f[k] == 'u' || f[k] == 'x' || f[k] == 'X' || f[k] == 's'))
			return (ft_found_dot_bonus(f[k], args, i));
		j++;
	}
	while (f[j_])
	{
		if (f[j_] == ' ' && (f[k] == 'd' || f[k] == 'i' || f[k] == 's'))
			return (ft_found_space_bonus(f[k], args, i));
		if (f[j_] == '-' && (f[k] == 'c' || f[k] == 's' || f[k] == 'p' || f[k] == 'd' || f[k] == 'i' || f[k] == 'u' || f[k] == 'x' || f[k] == 'X'))
			return (ft_found_minus_bonus(f[k], args, i));
		j_++;
	}
	return (i);
}
