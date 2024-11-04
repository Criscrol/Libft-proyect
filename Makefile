# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csanchez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 11:03:03 by csanchez          #+#    #+#              #
#    Updated: 2024/09/12 11:03:48 by csanchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = 		./ft_isalpha.c		\
			./ft_isdigit.c		\
			./ft_isalnum.c		\
			./ft_isascii.c		\
			./ft_isprint.c		\
			./ft_strlen.c		\
			./ft_memset.c		\
			./ft_bzero.c		\
			./ft_memcpy.c		\
			./ft_memmove.c		\
			./ft_strlcpy.c		\
			./ft_strlcat.c		\
			./ft_toupper.c		\
			./ft_tolower.c		\
			./ft_strchr.c		\
			./ft_strrchr.c		\
			./ft_strncmp.c		\
			./ft_memchr.c		\
			./ft_memcmp.c		\
			./ft_strnstr.c		\
			./ft_atoi.c		\
			./ft_calloc.c		\
			./ft_strdup.c		\
			./ft_substr.c		\
			./ft_strjoin.c		\
			./ft_strtrim.c		\
			./ft_split.c		\
			./ft_itoa.c		\
			./ft_strmapi.c		\
			./ft_striteri.c		\
			./ft_putchar_fd.c	\
			./ft_putstr_fd.c	\
			./ft_putendl_fd.c	\
			./ft_putnbr_fd.c	\
			
OBJS = $(SRCS:.c=.o)
SRC_BONUS	= ./ft_lstnew_bonus.c			\
			./ft_lstadd_front_bonus.c		\
			./ft_lstsize_bonus.c			\
			./ft_lstlast_bonus.c			\
			./ft_lstadd_back_bonus.c		\
			./ft_lstdelone_bonus.c			\
			./ft_lstclear_bonus.c			\
			./ft_lstiter_bonus.c			\
			./ft_lstmap_bonus.c			\
			
OBJ_BONUS = $(SRC_BONUS:.c=.o)
NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

.PHONY: all clean fclean re
