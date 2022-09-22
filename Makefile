# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rraffat2 <rraffat2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 12:06:21 by rraffat           #+#    #+#              #
#    Updated: 2022/05/14 03:52:20 by rraffat2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c ft_putchar.c ft_string.c ft_pointer.c ft_int.c ft_dec.c ft_hex.c
CC = gcc

FLAGS = -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(SRC) 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
