# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 02:42:33 by tharchen          #+#    #+#              #
#    Updated: 2021/06/16 13:58:11 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombies
CC				=	clang++
# FLAGS			=	-Wall -Wextra -Werror -std=c++98
FLAGS			=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

SRCS			=	\
					main.cpp \
					Zombie.class.cpp \
					ZombieHorde.class.cpp \

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRCS) -I . -o $(NAME)

clean:

fclean:
	@ rm -rf $(NAME)

re: fclean all
