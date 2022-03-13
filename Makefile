# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 17:36:12 by mchliyah          #+#    #+#              #
#    Updated: 2022/03/13 01:51:00 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Werror -Wextra -Wall

RM = rm -f

FILES = initial_stack.c	\
		ft_check_arg.c	\
		./libft/ft_atoi.c\
		./libft/ft_isdigit.c\
		./libft/ft_strlen.c\
		push_swap.c 	\
		ft_rotat.c	 \
		ft_push.c 	\
		ft_swap.c 	\
		./libft/ft_memcpy.c	\
		small_num.c	\
		free.c	\
		complex_num.c\
		serch.c
OBJECTS = $(subst .c,.o,$(FILES))

all : $(NAME)


$(NAME) :  $(OBJECTS)
	$(CC) $(CFLAG) $(FILES) -o  $(NAME) -fsanitize=address -g

clean : 
	$(RM) $(OBJECTS) $(BONUOBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all