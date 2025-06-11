# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/24 15:40:37 by jcesar-s          #+#    #+#              #
#    Updated: 2025/05/24 17:28:32 by jcesar-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
SRC=ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_hex.c ft_putnbr_u.c ft_putptr.c
OBJS=$(SRC:.c=.o)
CC=cc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I libft

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) ft_printf

re: fclean all

printf: $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o ft_printf libft/libft.a -I libft -g
