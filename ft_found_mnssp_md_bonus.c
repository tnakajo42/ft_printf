/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_mnssp_md_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:56:19 by tnakajo           #+#    #+#             */
/*   Updated: 2023/01/06 17:28:32 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* static int	ft_printf_not_mnd_bonus(const char f, va_list args, int i, int n); */

int	ft_m_md_bonus(const char f, va_list args, char *b, char *a)
{
	int	i;
	int	b_;
	int	a_;

	i = 0;
	b_ = ft_atoi_bonus(b);
	a_ = ft_atoi_bonus(a);
	if (f == 'c')
		i = ft_found_c_md_bonus(va_arg(args, int), b_, '-');
	else if (f == 's')
		i = ft_found_s_md_bonus(va_arg(args, char *), b_, a_, '-');
	else if (f == 'p')
		i = ft_found_p_md_bonus(va_arg(args, unsigned long long), b_, a_, '-');
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_md_bonus(va_arg(args, int), b_, a_, '-');
	else if (f == 'u')
		i = ft_found_u_md_bonus(va_arg(args, unsigned int), b_, a_);
	else if (f == 'x')
		i = ft_found_x_md_bonus(va_arg(args, size_t), b_, a_, '-');
	else if (f == 'X')
		i = ft_found_bigx_md_bonus(va_arg(args, size_t), b_, a_, '-');
	else if (f == '%')
		i = ft_found_c_bonus('%', 0, ' ', 0);
	free (b);
	free (a);
	return (i);
}

int	ft_p_md_bonus(const char f, va_list args, char *b, char *a)
{
	int	i;
	int	b_;
	int	a_;

	i = 0;
	b_ = ft_atoi_bonus(b);
	a_ = ft_atoi_bonus(a);
	if (f == 'c')
		i = ft_found_c_md_bonus(va_arg(args, int), b_, '+');
	else if (f == 's')
		i = ft_found_s_md_bonus(va_arg(args, char *), b_, a_, '+');
	else if (f == 'p')
		i = ft_found_p_md_bonus(va_arg(args, unsigned long long), b_, a_, '+');
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_md_bonus(va_arg(args, int), b_, a_, '+');
	else if (f == 'u')
		i = ft_found_u_md_bonus(va_arg(args, unsigned int), b_, a_);
	else if (f == 'x')
		i = ft_found_x_md_bonus(va_arg(args, size_t), b_, a_, '+');
	else if (f == 'X')
		i = ft_found_bigx_md_bonus(va_arg(args, size_t), b_, a_, '+');
	else if (f == '%')
		i = ft_found_c_bonus('%', 0, ' ', 0);
	free (b);
	free (a);
	return (i);
}

int	ft_z_md_bonus(const char f, va_list args, char *b, char *a)
{
	int	i;
	int	b_;
	int	a_;

	i = 0;
	b_ = ft_atoi_bonus(b);
	a_ = ft_atoi_bonus(a);
	if (f == 'c')
		i = ft_found_c_md_bonus(va_arg(args, int), b_, '0');
	else if (f == 's')
		i = ft_found_s_md_bonus(va_arg(args, char *), b_, a_, '0');
	else if (f == 'p')
		i = ft_found_p_md_bonus(va_arg(args, unsigned long long), b_, a_, '0');
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_md_bonus(va_arg(args, int), b_, a_, '0');
	else if (f == 'u')
		i = ft_found_u_md_bonus(va_arg(args, unsigned int), b_, a_);
	else if (f == 'x')
		i = ft_found_x_md_bonus(va_arg(args, size_t), b_, a_, '0');
	else if (f == 'X')
		i = ft_found_bigx_md_bonus(va_arg(args, size_t), b_, a_, '0');
	else if (f == '%')
		i = ft_found_c_bonus('%', 0, ' ', 0);
	free (b);
	free (a);
	return (i);
}

int	ft_sh_md_bonus(const char f, va_list args, char *b, char *a)
{
	int	i;
	int	b_;
	int	a_;

	i = 0;
	b_ = ft_atoi_bonus(b);
	a_ = ft_atoi_bonus(a);
	if (f == 'c')
		i = ft_found_c_md_bonus(va_arg(args, int), b_, '#');
	else if (f == 's')
		i = ft_found_s_md_bonus(va_arg(args, char *), b_, a_, '#');
	else if (f == 'p')
		i = ft_found_p_md_bonus(va_arg(args, unsigned long long), b_, a_, '#');
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_md_bonus(va_arg(args, int), b_, a_, '#');
	else if (f == 'u')
		i = ft_found_u_md_bonus(va_arg(args, unsigned int), b_, a_);
	else if (f == 'x')
		i = ft_found_x_md_bonus(va_arg(args, size_t), b_, a_, '#');
	else if (f == 'X')
		i = ft_found_bigx_md_bonus(va_arg(args, size_t), b_, a_, '#');
	else if (f == '%')
		i = ft_found_c_bonus('%', 0, ' ', 0);
	free (b);
	free (a);
	return (i);
}

int	ft_sp_md_bonus(const char f, va_list args, char *b, char *a)
{
	int	i;
	int	b_;
	int	a_;

	i = 0;
	b_ = ft_atoi_bonus(b);
	a_ = ft_atoi_bonus(a);
	if (f == 'c')
		i = ft_found_c_md_bonus(va_arg(args, int), b_, ' ');
	else if (f == 's')
		i = ft_found_s_md_bonus(va_arg(args, char *), b_, a_, ' ');
	else if (f == 'p')
		i = ft_found_p_md_bonus(va_arg(args, unsigned long long), b_, a_, ' ');
	else if (f == 'd' || f == 'i')
		i = ft_found_i_plus_d_md_bonus(va_arg(args, int), b_, a_, ' ');
	else if (f == 'u')
		i = ft_found_u_md_bonus(va_arg(args, unsigned int), b_, a_);
	else if (f == 'x')
		i = ft_found_x_md_bonus(va_arg(args, size_t), b_, a_, ' ');
	else if (f == 'X')
		i = ft_found_bigx_md_bonus(va_arg(args, size_t), b_, a_, ' ');
	else if (f == '%')
		i = ft_found_c_bonus('%', 0, ' ', 0);
	free (b);
	free (a);
	return (i);
}
