# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 17:36:12 by mchliyah          #+#    #+#              #
#    Updated: 2022/03/15 02:08:10 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BNM = checker
CFLAGS = -Werror -Wextra -Wall

RM = rm -f

FILES = initial_stack.c	\
		ft_check_arg.c	\
		push_swap.c 	\
		ft_rotat.c		\
		ft_push.c 		\
		ft_swap.c 		\
		small_num.c		\
		free.c			\
		complex_num.c	\
		serch.c

OBJ = $(FILES:.c=.o)

B_FILES = \
		./checker/checker.c				\
		./checker/get_next_line_utils.c	\
		./checker/get_next_line.c		\
		./checker/initial_stack.c		\
		./checker/ft_check_arg.c		\
		./checker/ft_rotat.c			\
		./checker/ft_push.c 			\
		./checker/ft_swap.c 			\
		./checker/free.c

BOBJ = $(B_FILES:.c=.o)

LIBFT = ./libft
ARLIB = $(LIBFT)/libft.a
ALLIBFT = make -C $(LIBFT)
CLEANLIBFT = make clean -C $(LIBFT)
FCLEANLIBFT = rm -f $(ARLIB)
RELIBFT = make re -C $(LIBFT)

C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

.PHONY : all clean fclean re bonus

%.o: %.c
	@gcc $(FLAGS) -c $^ -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	@$(ALLIBFT)
	@gcc $(OBJ) $(ARLIB) -fsanitize=address -o $(NAME)
	@echo "$(C_GREEN)[PUSH SWAP MANDATORY CREATED!]$(C_RES)"

bonus : $(BNM)

$(BNM) : $(BOBJ)
	@$(ALLIBFT)
	@gcc $(BOBJ) $(ARLIB) -fsanitize=address -o ./checker/$(BNM)
	@echo "$(C_L_BLUE)[PUSH SWAP BONUS CREATED!]$(C_RES)"

clean :
	@$(CLEANLIBFT)
	@rm -f $(OBJ)
	@rm -f $(BOBJ)
	@echo "$(C_RED)[PUSH SWAP OBJECTS DELETED!]$(C_RES)"

fclean : clean
	@$(FCLEANLIBFT)
	@rm -f $(NAME)
	@rm -f ./checker/$(BNM)
	@echo "$(C_RED)[LIBFT ARCHIVE & PUSH SWAP EXECUTABLES DELETED!]$(C_RES)"

re : fclean all