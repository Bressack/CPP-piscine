# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 20:38:58 by tharchen          #+#    #+#              #
#    Updated: 2021/07/09 19:25:48 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	materia
CC						=	clang++

# FLAGS					=	-Wall -Wextra -Werror -std=c++98 -Ofast
FLAGS					=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

INCLUDES				=	includes/

SRCS_DIR				=	srcs/

OBJS_DIR				=	objs/

# !!SRCS_LIST_CLASSES

SRCS_MATERIASOURCE			=	\
							MateriaSource/MateriaSource.class.cpp \
							MateriaSource/MateriaSource.cd.class.cpp \
							MateriaSource/MateriaSource.gs.class.cpp \
							MateriaSource/MateriaSource.ovop.class.cpp \

SRCS_CHARACTER			=	\
							Character/Character.class.cpp \
							Character/Character.cd.class.cpp \
							Character/Character.gs.class.cpp \
							Character/Character.ovop.class.cpp \

SRCS_CURE			=	\
							Cure/Cure.class.cpp \
							Cure/Cure.cd.class.cpp \
							Cure/Cure.gs.class.cpp \
							Cure/Cure.ovop.class.cpp \

SRCS_ICE			=	\
							Ice/Ice.class.cpp \
							Ice/Ice.cd.class.cpp \
							Ice/Ice.gs.class.cpp \
							Ice/Ice.ovop.class.cpp \

SRCS_AMATERIA			=	\
							AMateria/AMateria.class.cpp \
							AMateria/AMateria.cd.class.cpp \
							AMateria/AMateria.gs.class.cpp \
							AMateria/AMateria.ovop.class.cpp \

# !!SRCS_LIST_OTHERS

SRCS_LIST				=	\
							main.cpp \
							$(SRCS_IMATERIASOURCE) \
							$(SRCS_MATERIASOURCE) \
							$(SRCS_CHARACTER) \
							$(SRCS_CURE) \
							$(SRCS_ICE) \
							$(SRCS_AMATERIA) \

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
