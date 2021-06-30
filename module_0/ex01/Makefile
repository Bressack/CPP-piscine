# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 20:38:58 by tharchen          #+#    #+#              #
#    Updated: 2021/06/30 14:06:23 by tharchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	phonebook
CC						=	clang++

# FLAGS					=	-Wall -Wextra -Werror -std=c++98 -Ofast
FLAGS					=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

INCLUDES				=	includes/

SRCS_DIR				=	srcs/

OBJS_DIR				=	objs/

# !!SRCS_LIST_CLASSES

SRCS_PHONEBOOK			=	\
							Phonebook/Phonebook.class.cpp \
							Phonebook/Phonebook.cd.class.cpp \
							Phonebook/Phonebook.gs.class.cpp \
							Phonebook/Phonebook.ovop.class.cpp \

SRCS_CONTACT			=	\
							Contact/Contact.class.cpp \
							Contact/Contact.cd.class.cpp \
							Contact/Contact.gs.class.cpp \
							Contact/Contact.ovop.class.cpp \

# !!SRCS_LIST_OTHERS

SRCS_LIST				=	\
							main.cpp \
							$(SRCS_PHONEBOOK) \
							$(SRCS_CONTACT) \

SRCS					=	$(addprefix $(SRCS_DIR), $(SRCS_LIST))

#### RULES #####################################################################

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

fclean:
	@ rm -rf $(NAME) $(NAME).dSYM

re: fclean all
