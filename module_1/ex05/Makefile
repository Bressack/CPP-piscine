# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 20:38:58 by tharchen          #+#    #+#              #
#    Updated: 2021/06/21 11:09:32 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	hellobrain
CC						=	clang++

FLAGS					=	-Wall -Wextra -Werror -std=c++98
# FLAGS					=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

INCLUDES				=	includes/

SRCS_DIR				=	srcs/

# !!SRCS_LIST_CLASSES

SRCS_HUMAN			=	\
							Human/Human.class.cpp \
							Human/Human.cd.class.cpp \
							Human/Human.gs.class.cpp \
							Human/Human.ovop.class.cpp \

SRCS_BRAIN			=	\
							Brain/Brain.class.cpp \
							Brain/Brain.cd.class.cpp \
							Brain/Brain.gs.class.cpp \
							Brain/Brain.ovop.class.cpp \

# !!SRCS_LIST_OTHERS

SRCS_LIST				=	\
							main.cpp \
							$(SRCS_HUMAN) \
							$(SRCS_BRAIN) \

SRCS					=	$(addprefix $(SRCS_DIR), $(SRCS_LIST))

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) $(SRCS) -I $(INCLUDES) -o $(NAME)

clean:

fclean:
	@ rm -rf $(NAME) $(NAME).dSYM

re: fclean all
