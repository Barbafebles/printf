# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfebles- <bfebles-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 15:53:28 by bfebles-          #+#    #+#              #
#    Updated: 2023/05/20 20:48:22 by bfebles-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB = ft_printf.h
CC = gcc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rcs
SRCS = ft_putchar_pf.c\
		ft_putnbr_pf.c\
		ft_puthexa_pf.c\
		


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	$(AR) $(NAME) $(OBJS)

%.o:%.c
	$(CC) -c $(CFLAGS) $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re