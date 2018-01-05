#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/30 15:44:05 by dpetrus           #+#    #+#              #
#    Updated: 2017/12/23 14:12:05 by rhalatiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

LIB = ./

SRCFILES =	ft_memset.c\
			ft_memalloc.c\
			ft_memdel.c\
			ft_putchar.c\
			ft_putchar_fd.c\
			ft_putendl.c\
			ft_putendl_fd.c\
			ft_putstr_fd.c\
			ft_strlen.c\
			ft_strnew.c\
			ft_strsub.c\

OBJECT =	$(SRCFILES:.c=.o)			

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I $(LIB) $(SRCFILES)
	ar rc $(NAME) $(OBJECT)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
