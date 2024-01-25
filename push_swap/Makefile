# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 17:57:16 by seckhard          #+#    #+#              #
#    Updated: 2024/01/25 21:57:40 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME			= push_swap

# Source Files
SOURCES 		= \
							main.c push.c rev_rotate.c rotate.c \
							swap.c utils.c stack_init.c sort_three.c \
							errors.c 

OBJECTS 		= $(SOURCES:.c=.o)

# Directories
INCLUDE 		= push_swap.h
LIBFT			= ./libft/libft.a
FT_PRINTF			= ./ft_printf/libftprintf.a

# Compiler and CFlags
CC 				= gcc
CFLAGS			= -Wall -Wextra -Werror -I
LDFLAGS			= -L./libft -lft -L./ft_printf -lft

# Build Rules
$(NAME): 		$(OBJECTS) $(LIBFT) $(FT_PRINTF)
				$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(LDFLAGS)

all:			$(NAME)

%.o: %.c		$(INCLUDE)
				$(CC) -c $(CFLAGS) $(INCLUDE) $< -o $@

$(LIBFT):
	make -C ./libft

$(FT_PRINTF):
	make -C ./ft_printf

clean:
				rm -f $(OBJECTS)
				make -C ./libft clean
				make -C ./ft_printf clean

fclean:			clean
				rm -f $(NAME)
				make -C ./libft fclean
				make -C ./ft_printf fclean

re:				fclean all

.PHONY:			all clean fclean re