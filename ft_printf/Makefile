# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaizhang <kaizhang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 16:34:35 by kaizhang          #+#    #+#              #
#    Updated: 2022/06/24 15:28:05 by kaizhang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
RM = rm -f

SRCS = 	ft_char_print.c \
		ft_hex_print.c \
		ft_nbr_count.c \
		ft_nbr_print.c \
		ft_printf.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_specifier_check.c \
		ft_str_print.c \
		ft_strlen.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
