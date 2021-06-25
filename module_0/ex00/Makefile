# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 02:42:33 by tharchen          #+#    #+#              #
#    Updated: 2021/05/27 04:06:24 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	megaphone
CC				=	clang++
FLAGS			=	-Wall -Wextra -Werror -std=c++98

SRCS			=	megaphone.cpp

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:

fclean:
	@ rm -rf $(NAME)

re: fclean all
