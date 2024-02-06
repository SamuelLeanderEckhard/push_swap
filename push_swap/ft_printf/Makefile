# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:56:45 by seckhard          #+#    #+#              #
#    Updated: 2024/02/04 19:42:06 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
SOURCES = \
					ft_printf.c ft_putchar.c ft_putchar_fd2.c \
					ft_putstr.c ft_putnbr.c ft_putunsignednbr.c \
					ft_puthexa.c ft_handle_ptr.c ft_strchr.c

OBJECTS = $(SOURCES:.c=.o)

NAME = libftprintf.a

INCLUDE = ft_printf.h

CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
CC = cc

$(NAME): $(OBJECTS)
			$(LIBC) $(NAME) $(OBJECTS)

all: $(NAME)

%.o: %.c $(INCLUDE)
		$(CC) -c $(CFLAGS) $< -o $@

clean:
			rm -f $(OBJECTS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
