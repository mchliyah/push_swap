# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 17:36:12 by mchliyah          #+#    #+#              #
#    Updated: 2022/03/15 02:25:55 by mchliyah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BNM = checker
CFLAGS = -Werror -Wextra -Wall

RM = rm -f

FILES = \
		./m_push_swap/initial_stack.c	\
		./m_push_swap/ft_check_arg.c	\
		./m_push_swap/push_swap.c 		\
		./m_push_swap/ft_rotat.c		\
		./m_push_swap/ft_push.c 		\
		./m_push_swap/ft_swap.c 		\
		./m_push_swap/small_num.c		\
		./m_push_swap/free.c			\
		./m_push_swap/complex_num.c		\
		./m_push_swap/serch.c

OBJ = $(FILES:.c=.o)

B_FILES = \
		./b_checker/checker.c				\
		./b_checker/get_next_line_utils.c	\
		./b_checker/get_next_line.c		\
		./b_checker/initial_stack.c		\
		./b_checker/ft_check_arg.c		\
		./b_checker/ft_rotat.c			\
		./b_checker/ft_push.c 			\
		./b_checker/ft_swap.c 			\
		./b_checker/free.c

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
	@gcc $(BOBJ) $(ARLIB) -fsanitize=address -o $(BNM)
	@echo "$(C_L_BLUE)[PUSH SWAP BONUS CREATED!]$(C_RES)"

clean :
	@$(CLEANLIBFT)
	@rm -f $(OBJ)
	@rm -f $(BOBJ)
	@echo "$(C_RED)[PUSH SWAP OBJECTS DELETED!]$(C_RES)"

fclean : clean
	@$(FCLEANLIBFT)
	@rm -f $(NAME)
	@rm -f $(BNM)
	@echo "$(C_RED)[LIBFT ARCHIVE & PUSH SWAP EXECUTABLES DELETED!]$(C_RES)"

re : fclean all