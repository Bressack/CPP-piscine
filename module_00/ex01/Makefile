# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/26 02:42:33 by tharchen          #+#    #+#              #
#    Updated: 2021/05/27 04:06:33 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook
CC				=	clang++
FLAGS			=	-Wall -Wextra -Werror -std=c++98

SRCS			=	\
					main.cpp \
					Contact.gs.class.cpp \
					Contact.class.cpp \
					new_contact.cpp \

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRCS) -I . -o $(NAME)

clean:

fclean:
	@ rm -rf $(NAME)

re: fclean all
