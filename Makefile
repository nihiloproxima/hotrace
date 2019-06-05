# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: fleonard <fleonard@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/02 10:51:00 by ftourret     #+#   ##    ##    #+#        #
#    Updated: 2019/06/05 18:18:23 by fleonard    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = hotrace

FLAGS = -Wall -Wextra -Werror -Ofast -O2

SRC =	get_next_line.c\
		main.c\
		ft_resolve.c\
		fcts.c\
		fctstwo.c\
		fctsthree.c\

OBJ = $(subst .c,.o,$(SRC))

LIGHT_PINK = \033[0;38;5;200m

PINK = \033[0;38;5;198m

DARK_BLUE = \033[0;38;5;110m

GREEN = \033[0;38;5;111m

LIGHT_GREEN = \033[0;38;5;121m

FLASH_GREEN = \033[33;32m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(DARK_BLUE)\nFichiers de "$(NAME)" compilés\n"
	@gcc $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(FLASH_GREEN)Programme "$(NAME)" compilé et prêt à l'usage !\n"


%.o: %.c hotrace.h
	@gcc $(FLAGS) -o $@ -c $<
	@echo "$(DARK_BLUE).\c"

clean:
	@rm -rf $(OBJ)
	@echo "$(LIGHT_PINK)Suppression des .o de "$(NAME)"\n"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(PINK)Suppression de" $(NAME)"\n"

re: fclean all
