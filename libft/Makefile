# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 18:52:06 by jcesar-s          #+#    #+#              #
#    Updated: 2025/04/16 15:12:47 by jcesar-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a
CFILES = ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_strncmp.c 
CFILES += ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
CFILES += ft_atoi.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_tolower.c
CFILES += ft_toupper.c ft_memmove.c ft_strnstr.c ft_strlcpy.c ft_memchr.c
CFILES += ft_strlcat.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c
CFILES += ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_strjoin.c ft_substr.c
CFILES += ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c
BFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c
BFILES += ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
BFILES += ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BOBJS = $(BFILES:.c=.o)
OBJS = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: all $(BOBJS)
	ar rcs $(NAME) $(BOBJS)
