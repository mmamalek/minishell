# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 11:00:25 by mmamalek          #+#    #+#              #
#    Updated: 2019/08/19 11:15:47 by mmamalek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= minishell
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRC		= get_next_line/get_next_line.c \
		  main.c
OBJ		= get_next_line/get_next_line.o \
		  main.o
LIB		= libft/libft.a

all:	$(NAME)

$(NAME): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) -o $(NAME) $^

%.o:	%.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -fv $(OBJ)

fclean: clean
	rm -fv $(LIB)
