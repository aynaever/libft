# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaouadi <anaouadi@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 21:35:18 by anaouadi          #+#    #+#              #
#    Updated: 2021/07/04 07:39:01 by anaouadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC_FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
			ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c  \
			ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c  \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_substr.c     \
			ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_FILES): $(SRC_FILES)
	$(CC) -c $(FLAGS) $(SRC_FILES)

clean:
	rm -f $(OBJ_FILES) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_FILES) $(OBJ_BONUS)

$(OBJ_BONUS): $(SRC_BONUS)
	$(CC) -c $(FLAGS) $(SRC_BONUS)

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC_FILES) $(SRC_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES) $(OBJ_BONUS)

.PHONY: all clean fclean re