/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:53:02 by tnakajo           #+#    #+#             */
/*   Updated: 2022/12/31 18:16:18 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printf_bonus(const char *f, va_list args, int j, int i);
int	ft_check_bonus(const char *format, int j, char *flags);
int	ft_found_c(int c, int i);
int	ft_found_s(char *s, int i);
int	ft_found_p(size_t p, int i);
int	ft_found_i_plus_d(int d, int i);
int	ft_found_u(unsigned int u, int i);
int	ft_found_x(size_t x, int i);
int	ft_found_bigx(size_t bigx, int i);
int	ft_found_sharp_bonus(const char format, va_list args, int i);
int	ft_found_plus_bonus(va_list args, int i);
int	ft_found_space_bonus(const char format, va_list args, int i);
int	ft_found_minus_bonus(const char format, va_list args, int i);
int	ft_found_zero_bonus(const char format, va_list args, int i);
int	ft_found_dot_bonus(const char format, va_list args, int i);

#endif
