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

NAME					=	wasteland
CC						=	clang++

# FLAGS					=	-Wall -Wextra -Werror -std=c++98 -Ofast
FLAGS					=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

INCLUDES				=	includes/

SRCS_DIR				=	srcs/

OBJS_DIR				=	objs/

# !!SRCS_LIST_CLASSES

SRCS_CHARACTER			=	\
							Character/Character.class.cpp \
							Character/Character.cd.class.cpp \
							Character/Character.gs.class.cpp \
							Character/Character.ovop.class.cpp \

SRCS_RADSCORPION			=	\
							RadScorpion/RadScorpion.class.cpp \
							RadScorpion/RadScorpion.cd.class.cpp \
							RadScorpion/RadScorpion.gs.class.cpp \
							RadScorpion/RadScorpion.ovop.class.cpp \

SRCS_SUPERMUTANT			=	\
							SuperMutant/SuperMutant.class.cpp \
							SuperMutant/SuperMutant.cd.class.cpp \
							SuperMutant/SuperMutant.gs.class.cpp \
							SuperMutant/SuperMutant.ovop.class.cpp \

SRCS_POWERFIST			=	\
							PowerFist/PowerFist.class.cpp \
							PowerFist/PowerFist.cd.class.cpp \
							PowerFist/PowerFist.gs.class.cpp \
							PowerFist/PowerFist.ovop.class.cpp \

SRCS_PLASMARIFLE			=	\
							PlasmaRifle/PlasmaRifle.class.cpp \
							PlasmaRifle/PlasmaRifle.cd.class.cpp \
							PlasmaRifle/PlasmaRifle.gs.class.cpp \
							PlasmaRifle/PlasmaRifle.ovop.class.cpp \

SRCS_ENEMY			=	\
							Enemy/Enemy.class.cpp \
							Enemy/Enemy.cd.class.cpp \
							Enemy/Enemy.gs.class.cpp \
							Enemy/Enemy.ovop.class.cpp \

SRCS_AWEAPON			=	\
							AWeapon/AWeapon.class.cpp \
							AWeapon/AWeapon.cd.class.cpp \
							AWeapon/AWeapon.gs.class.cpp \
							AWeapon/AWeapon.ovop.class.cpp \

# !!SRCS_LIST_OTHERS

SRCS_LIST				=	\
							main.cpp \
							$(SRCS_CHARACTER) \
							$(SRCS_RADSCORPION) \
							$(SRCS_SUPERMUTANT) \
							$(SRCS_POWERFIST) \
							$(SRCS_PLASMARIFLE) \
							$(SRCS_ENEMY) \
							$(SRCS_AWEAPON) \

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
