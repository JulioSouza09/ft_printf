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
LIBFT=libft/libft.a
SRC=
OBJS=
CC=cc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME) $(LIBFT)

$(NAME): $(OBJS) 
	ar -rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

# Remove this for evaluation
$(LIBFT):
	@if [ ! -d libft ]; then \
		git clone git@github.com:JulioSouza09/libft.git; \
		rm -rf libft/.git; \
	fi

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
