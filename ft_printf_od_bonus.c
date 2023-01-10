/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_od_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:22:07 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/10 17:44:23 by tnakajo          ###   ########.fr       */
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
		// i = ft_found_s_od_bonus(va_arg(args, char *), i);
	else if (format == 'p')
		i = ft_found_p_od_bonus(va_arg(args, unsigned long long), i);
	else if (format == 'd' || format == 'i')
		i = ft_found_i_plus_d_od_bonus(va_arg(args, int), i);
	else if (format == 'u')
		i = ft_found_u_od_bonus(va_arg(args, unsigned int), i);
	else if (format == 'x')
		i = ft_found_x_od_bonus(va_arg(args, size_t), i);
	else if (format == 'X')
		i = ft_found_bigx_od_bonus(va_arg(args, size_t), i);
	else if (format == '%')
		i = ft_found_c('%', i);
	else
		i = -1;
	return (i);
}
