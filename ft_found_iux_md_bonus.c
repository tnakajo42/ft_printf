/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_iux_middle_dot_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:21:16 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/06 17:21:24 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_found_u_md_bonus(unsigned int u, int b, int a, char flag)
int	ft_found_u_md_bonus(unsigned int u, int b, int a)
{
	int		i;
	char	*u_;
	int		len;

	i = 0;
	u_ = ft_itoa_bonus((long)u);
	len = ft_strlen_bonus(u_);
	if (len > a)
		i += ft_flagf_bonus(len, b, ' ', 0);
	if (len < a)
		i += ft_flagf_bonus(len, b, '0', 0);
	i = ft_found_u(u, i);
	return (i);
}

int	ft_found_x_md_bonus(size_t x, int b, int a, char flag)
{
	int		i;
	int		len;

	len = ft_x_len_bonus(x, 0);
	i = ft_flagf_bonus(len, b, flag, 0);
	// while (len-- >= 0)
	// 	i = ft_found_c(s[j++], i);
	if (len > a)
		i += ft_flagf_bonus(len, b, ' ', 0);
	if (len < a)
		i += ft_flagf_bonus(len, b, '0', 0);
	i = ft_found_x(x, i);
	return (i);
	// len = 0;
	// len = ft_x_len_bonus(x, len);
	// if (flag == '-')
	// 	i = ft_found_x(x, i) + ft_flagf_bonus(len, n, ' ', i);
	// else if (flag == '0' || flag == '.')
	// 	i = ft_flagf_bonus(len, n, '0', i) + ft_found_x(x, i);
	// else if (flag == '#')
	// {
	// 	while (len + 2 < n--)
	// 		i = ft_found_c(' ', i);
	// 	if (x != 0)
	// 		i = ft_found_s("0x", i);
	// 	i = ft_found_x(x, i);
	// }
	// else
	// 	i = ft_flagf_bonus(len, n, ' ', i) + 
	// return (0);
}

int	ft_found_bigx_md_bonus(size_t bigx, int b, int a, char flag)
{
	int		i;
	int		len;

	len = ft_x_len_bonus(bigx, 0);
	i = ft_flagf_bonus(len, b, flag, 0);
	// while (len-- >= 0)
	// 	i = ft_found_c(s[j++], i);
	if (len > a)
		i += ft_flagf_bonus(len, b, ' ', 0);
	if (len < a)
		i += ft_flagf_bonus(len, b, '0', 0);
	i = ft_found_bigx(bigx, i);
	return (i);
	// int	len;

	// len = 0;
	// len = ft_x_len_bonus(bigx, len);
	// if (flag == '-')
	// 	i = ft_found_bigx(bigx, i) + ft_flagf_bonus(len, n, ' ', i);
	// else if (flag == '0' || flag == '.')
	// 	i = ft_flagf_bonus(len, n, '0', i) + ft_found_bigx(bigx, i);
	// else if (flag == '#')
	// {
	// 	while (len + 2 < n--)
	// 		i = ft_found_c(' ', i);
	// 	if (bigx != 0)
	// 		i = ft_found_s("0X", i);
	// 	i = ft_found_bigx(bigx, i);
	// }
	// else
	// 	i = ft_flagf_bonus(len, n, ' ', i) + ft_found_bigx(bigx, i);
	// return (i);
}
