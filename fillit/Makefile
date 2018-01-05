# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/20 20:41:28 by dpetrus           #+#    #+#              #
#    Updated: 2017/12/23 19:42:50 by rhalatiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

SRC_PATH =	./src/
SRC_NAME =	check.c\
			main.c\
			map.c\
			read.c\
			solve.c\
			ft_error.c\

OBJ = $(SRC_NAME:.c=.o) $(TEST_NAME:.c=.o) $(LIB_NAME:.c=.o)

LIB_PATH =	./includes/libft/
LIB_NAME = 	ft_memdel.c\
			ft_memset.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putstr_fd.c\
			ft_strlen.c\
			ft_strnew.c\
			ft_strsub.c\
			ft_memalloc.c\

INC_PATH =	./src/

NAME =		fillit

CC =		gcc
CFLAGS =	-Wall -Werror -Wextra

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
LIB = $(addprefix $(LIB_PATH),$(LIB_NAME))

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) $(LIB) -I $(INC_PATH) -o $(NAME)
	@echo "\033[1;33mCompilation \t \033[0;32m[OK]\033[0m"

clean:
	@rm -rf $(OBJ)
	@echo "\033[1;33mCleaning obj \t \033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;33mCleaning exec \t \033[0;32m[OK]\033[0m"

re: fclean all
