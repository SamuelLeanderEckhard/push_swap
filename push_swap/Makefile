# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 17:57:16 by seckhard          #+#    #+#              #
#    Updated: 2024/01/22 20:32:33 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME			= push_swap

# Source Files
SOURCES 		= \
							main.c push.c rev_rotate.c rotate.c \
							swap.c 

OBJECTS 		= $(SOURCES:.c=.o)

# Directories
INCLUDE 		= push_swap.h
LIBFT			= ./libft/libft.a
PRINTF			= ./ft_printf/libftprintf.a

# Compiler and CFlags
CC 				= gcc
CFLAGS			= -Wall -Wextra -Werror -I
LIBC			= ar rcs

# Build Rules
$(NAME): 		$(OBJECTS) $(LIBFT) $(FT_PRINTF)
				$(CC) $(CFLAGS) $(INCLUDE) -o $(NAME) $(OBJECTS)

all:			$(NAME)

%.o: %.c
				$(CC) -c $(CFLAGS) $(INCLUDE) $?

clean:
				rm -f $(OBJECTS) $(LIBFT) $(FT_PRINTF)

fclean:			clean
				rm -f $(NAME) $(LIBFT) $(FT_PRINTF)

re:				fclean all

.PHONY:			all clean fclean re