# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 16:35:21 by tnakajo           #+#    #+#              #
#    Updated: 2023/01/02 17:33:51 by tnakajo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CCFLAG = -Wall -Wextra -Werror

AR = ar
ARFLAG = crs

RM = rm -f

DEPS = ft_printf.h

SRCS = ft_printf.c \
	ft_found_cspd.c \
	ft_found_iux.c \
	ft_check_bonus.c \
	ft_printf_bonus.c \
	ft_found_ssp_bonus.c \
	ft_found_mnd_bonus.c \
	ft_found_iux_bonus.c \
	ft_atoi_bonus.c \
	ft_itoa_bonus.c \
	ft_memcpy_bonus.c \
	ft_found_cspd_bonus.c \
	ft_strlen_bonus.c

SRCS_BONUS = 

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

%.o: %.c $(DEPS)
	$(CC) $(CCFLAG) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAG) $@ $^

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) ${NAME}

re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAG) $(NAME) $^

.PHONY: all clean fclean re bonus
