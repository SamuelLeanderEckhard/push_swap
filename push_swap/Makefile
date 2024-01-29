# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 17:57:16 by seckhard          #+#    #+#              #
#    Updated: 2024/01/29 22:04:54 by seckhard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME			= push_swap

# Source Files
SOURCES 		= \
							create_stack.c main.c free_errors.c \
							prep_b_to_a.c swap.c utils.c sort_three.c \
							push.c rev_rotate.c rotate.c \
							sort_all_utils.c sort_all.c prep_a_to_b.c \
							split.c

OBJECTS 		= $(SOURCES:.c=.o)

# Directories
INCLUDE 		= push_swap.h
LIBFT			= ./libft/libft.a
FT_PRINTF			= ./ft_printf/libftprintf.a

# Compiler and CFlags
CC 				= gcc
CFLAGS			= -Wall -Wextra -Werror -I. -g
LDFLAGS			= -L./libft -lft -L./ft_printf -lftprintf

# Build Rules
$(NAME): 		$(OBJECTS) $(LIBFT) $(FT_PRINTF)
				$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(LDFLAGS)

all:			$(NAME)

%.o: %.c		$(INCLUDE)
				$(CC) -c $(CFLAGS) $< -o $@

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