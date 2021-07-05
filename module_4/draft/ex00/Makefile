# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 20:38:58 by tharchen          #+#    #+#              #
#    Updated: 2021/07/04 17:19:48 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	poly
CC						=	clang++

# FLAGS					=	-Wall -Wextra -Werror -std=c++98 -Ofast
FLAGS					=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

INCLUDES				=	includes/

SRCS_DIR				=	srcs/

OBJS_DIR				=	objs/

# !!SRCS_LIST_CLASSES

SRCS_PEON			=	\
							Peon/Peon.class.cpp \
							Peon/Peon.cd.class.cpp \
							Peon/Peon.gs.class.cpp \
							Peon/Peon.ovop.class.cpp \

SRCS_VICTIM			=	\
							Victim/Victim.class.cpp \
							Victim/Victim.cd.class.cpp \
							Victim/Victim.gs.class.cpp \
							Victim/Victim.ovop.class.cpp \

SRCS_SORCERER			=	\
							Sorcerer/Sorcerer.class.cpp \
							Sorcerer/Sorcerer.cd.class.cpp \
							Sorcerer/Sorcerer.gs.class.cpp \
							Sorcerer/Sorcerer.ovop.class.cpp \

# !!SRCS_LIST_OTHERS

SRCS_LIST				=	\
							main.cpp \
							$(SRCS_PEON) \
							$(SRCS_VICTIM) \
							$(SRCS_SORCERER) \

all: $(NAME)

$(NAME): $(SRCS_LIST)
	@ $(CC) $(FLAGS) $(addprefix $(OBJS_DIR), $(SRCS_LIST:.cpp=.o)) -I $(INCLUDES) -o $(NAME)
	@ printf "\033[31m Program \033[32m%s : \033[34mCompilation \033[36m%-30s\033[0m\n" $(NAME) "done !"

$(SRCS_LIST):
	@ mkdir -p $(dir $(addprefix $(OBJS_DIR), $(@:.cpp=.o)))
	@ $(CC) $(FLAGS) $(addprefix $(SRCS_DIR), $@) -I $(INCLUDES) -c -o $(addprefix $(OBJS_DIR), $(@:.cpp=.o))
	@ printf "\033[31m Program \033[32m%s : \033[34mCompilation of \033[36m%-30s\033[0m\r" $(NAME) $(notdir $@)

clean:
	@ rm -rf $(OBJS_DIR)

fclean: clean
	@ rm -rf $(NAME) $(NAME).dSYM

re: fclean
	@ make -j
