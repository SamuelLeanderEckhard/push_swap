# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:56:45 by seckhard          #+#    #+#              #
#    Updated: 2024/01/25 21:54:12 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
SOURCES = \
					ft_printf.c ft_putchar.c ft_putchar_fd2.c \
					ft_putstr.c ft_putnbr.c ft_putunsignednbr.c \
					ft_puthexa.c ft_handle_ptr.c ft_strchr.c \

OBJECTS = $(SOURCES:.c=.o)

BONUS = 

BONUS_OBJECTS = $(BONUS:.c=.o)


NAME = libftprintf.a

INCLUDE = ft_printf.h

CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs

$(NAME): $(OBJECTS)
			$(LIBC) $(NAME) $(OBJECTS)

all: $(NAME)

%.o: %.c
		$(CC) -c $(CFLAGS) $?

clean:
			rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
