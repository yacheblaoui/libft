# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachebla <yachebla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 18:15:51 by yachebla          #+#    #+#              #
#    Updated: 2022/11/14 19:05:52 by yachebla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = cc

HEADER = libft.h



FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_strchr.c ft_strmapi.c\
 	ft_strlcpy.c ft_strlen.c ft_strncmp.c  ft_memset.c\
 	ft_strrchr.c ft_tolower.c ft_toupper.c ft_bzero.c ft_putchar_fd.c\
	ft_memcpy.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c ft_memmove.c ft_strjoin.c\
	ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
 
 OBJ = $(FILES:.c=.o)
 
 all: $(NAME)
 $(NAME): $(HEADER) $(OBJ)
		ar src  $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) ${CFLAGS} $< -o $@ -c
	
clean: 
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re : fclean all
	