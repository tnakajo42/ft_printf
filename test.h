/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 15:32:41 by akekesi           #+#    #+#             */
/*   Updated: 2023/01/07 13:59:00 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <limits.h>

int		test_check(int n, int n___);
void	test_print(int n, int n___, int c);
void	test_print_flags_info(int *flags_info);

int		test_printf_c(void);
int		test_printf_s(void);
int		test_printf_x(void);
int		test_printf_x_(void);
int		test_printf_p(void);
int		test_printf_i(void);
int		test_printf_d(void);
int		test_printf_u(void);

#endif
