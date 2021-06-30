# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 02:42:33 by tharchen          #+#    #+#              #
#    Updated: 2021/06/30 16:32:20 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombies
CC				=	clang++
FLAGS			=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

SRCS			=	\
					main.cpp \
					utils.class.cpp \
					Zombie.class.cpp \
					ZombieEvent.class.cpp \

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRCS) -I . -o $(NAME)

clean:

fclean:
	@ rm -rf $(NAME) $(NAME).dSYM

re: fclean all
