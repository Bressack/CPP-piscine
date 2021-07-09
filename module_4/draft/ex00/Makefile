# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 20:38:58 by tharchen          #+#    #+#              #
#    Updated: 2021/07/04 17:19:33 by tharchen         ###   ########.fr        #
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

SRCS_WRONGCAT			=	\
							WrongCat/WrongCat.class.cpp \
							WrongCat/WrongCat.cd.class.cpp \
							WrongCat/WrongCat.gs.class.cpp \
							WrongCat/WrongCat.ovop.class.cpp \

SRCS_WRONGANIMAL			=	\
							WrongAnimal/WrongAnimal.class.cpp \
							WrongAnimal/WrongAnimal.cd.class.cpp \
							WrongAnimal/WrongAnimal.gs.class.cpp \
							WrongAnimal/WrongAnimal.ovop.class.cpp \

SRCS_CAT			=	\
							Cat/Cat.class.cpp \
							Cat/Cat.cd.class.cpp \
							Cat/Cat.gs.class.cpp \
							Cat/Cat.ovop.class.cpp \

SRCS_DOG			=	\
							Dog/Dog.class.cpp \
							Dog/Dog.cd.class.cpp \
							Dog/Dog.gs.class.cpp \
							Dog/Dog.ovop.class.cpp \

SRCS_ANIMAL			=	\
							Animal/Animal.class.cpp \
							Animal/Animal.cd.class.cpp \
							Animal/Animal.gs.class.cpp \
							Animal/Animal.ovop.class.cpp \

# !!SRCS_LIST_OTHERS

SRCS_LIST				=	\
							main.cpp \
							$(SRCS_WRONGCAT) \
							$(SRCS_WRONGANIMAL) \
							$(SRCS_CAT) \
							$(SRCS_DOG) \
							$(SRCS_ANIMAL) \

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
