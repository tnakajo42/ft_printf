/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:45:09 by tnakajo           #+#    #+#             */
/*   Updated: 2022/12/31 17:47:48 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

static int	ft_next_percent(const char *format, va_list args, int i);

// clear && gcc ft_printf.c ft_check_bonus.c ft_found_cspd.c ft_found_iux.c ft_found_plus_bonus.c ft_found_sharp_bonus.c ft_found_space_bonus.c ft_printf_bonus.c  && ./a.out

/* int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			i = ft_next_percent(++format, args, i);
		}
		else if (i >= 0)
		{
			write (1, &*format, 1);
			i++;
		}
		if (*format)
			format++;
	}
	va_end(args);
	return (i);
} */

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;
	int		bonus_len;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format[j])
	{
		bonus_len = 0;
		if (format[j] == '%')
		{
			bonus_len = ft_check_bonus(format, ++j, "-0123456789.# +");
			if (bonus_len > 0)
				i = ft_printf_bonus(format, args, j, i);
			else
				i = ft_next_percent(&format[j], args, i);
		}
		else if (i >= 0)
		{
			write (1, &format[j], 1);
			i++;
		}
		if (i < 0)
			return (i);
		j = j + bonus_len + 1;
	}
	va_end(args);
	return (i);
}

static int	ft_next_percent(const char *format, va_list args, int i)
{
	if (*format == 'c')
		i = ft_found_c(va_arg(args, int), i);
	else if (*format == 's')
		i = ft_found_s(va_arg(args, char *), i);
	else if (*format == 'p')
		i = ft_found_p(va_arg(args, unsigned long long), i);
	else if (*format == 'd' || *format == 'i')
		i = ft_found_i_plus_d(va_arg(args, int), i);
	else if (*format == 'u')
		i = ft_found_u(va_arg(args, unsigned int), i);
	else if (*format == 'x')
		i = ft_found_x(va_arg(args, size_t), i);
	else if (*format == 'X')
		i = ft_found_bigx(va_arg(args, size_t), i);
	else if (*format == '%')
		i = ft_found_c('%', i);
	else
		i = -1;
	return (i);
}

/* int	main(void)
{
	int		i = 0;

	i = ft_printf(" % d \n", -1);
	printf("%d\n", i);
	i = printf(" % d \n", -1);
	printf("%d\n", i);
	i = ft_printf(" % d \n", 100);
	printf("%d\n", i);
	i = printf(" % d \n", 100);
	printf("%d\n", i);
	return (0);
} */

/* int	main(void)
{
	int		i = 0;
	char	*a = "Happy new year!";

	ft_printf("csp------\n");
	i = ft_printf("%c, %s, %s, %p, %p\n", 'X', "abc", NULL, NULL, a);
	printf("%d\n", i);
	i = printf("%+c, %10s, %+s, %+p, %+p\n", 'X', "abc", NULL, NULL, a);
	printf("%d\n", i);
	ft_printf("diuxX------\n");
	i = ft_printf("%d, %i, %u, %d\n", 42, 0, 12345, -2147483648);
	printf("%d\n", i);
	i = printf("%      d, %+i, %+u, %+d\n", 42, 0, 12345, -2147483648);
	printf("%d\n", i);
	ft_printf("xX%%------\n%42");
	i = ft_printf("%xaaa%Xs%%\n%", 'X', 'Z');
	printf("%d\n", i);
	i = printf("%xaaa%Xs%%\n%", 'X', 'Z');
	printf("%d\n", i);
	
	ft_printf("xX%%------\n%42");
	i = ft_printf("%#x\n", 10);
	printf("%d\n", i);
	i = printf("%#x\n", 10);
	printf("%d\n", i);
	printf("\n");
    ft_printf("ft_printf**%wx**\n", 9223372036854775807LL);
    printf("printf*****%wx**\n", 9223372036854775807LL);
	printf("\n");
	return (0);
} */
