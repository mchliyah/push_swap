# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 17:36:12 by mchliyah          #+#    #+#              #
#    Updated: 2022/02/17 01:41:07 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Werror -Wextra -Wall

RM = rm -f

FILES = initial_stack.c	\
		ft_check_arg.c	\
		./libft/ft_atoi.c\
		push_swap.c 	\
		ft_rotat.c	 \
		ft_push.c 	\
		ft_swap.c 	\
		ft_empty.c 	\
		./libft/ft_memcpy.c	\
		small_num.c	
OBJECTS = $(subst .c,.o,$(FILES))

all : $(NAME)

$(NAME) :  $(OBJECTS)
	$(CC) $(CFLAG) $(FILES) -fsanitize=address -g -o $(NAME)

clean : 
	$(RM) $(OBJECTS) $(BONUOBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all