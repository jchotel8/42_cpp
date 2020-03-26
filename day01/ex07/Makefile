# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchotel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 11:15:39 by jchotel           #+#    #+#              #
#    Updated: 2020/03/06 16:34:05 by jchotel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace
SRCSC		= main.cpp
SRCSH		= 
OBJS		= $(SRCSC:%.cpp=%.o)
LIBS 		= 
FLAGS		= -Wall -Wextra -Werror
CC			= clang++

all:		${NAME}

.c.o: ${OBJS}
	@clang++ ${FLAGS} -cpp $< -o ${<:.cpp=.o}

$(NAME):	${OBJS} ${SRCSH}
			@${CC} ${FLAGS} ${OBJS} ${LIBS} -o ${NAME}
			@echo "\033[1;32m┌─┐┬ ┬┌─┐┌─┐┌─┐┌─┐┌─┐"
			@echo 			"└─┐│ ││  │  ├┤ └─┐└─┐"
			@echo 			"└─┘└─┘└─┘└─┘└─┘└─┘└─┘"
			@echo "Replace generated successfully.\033[0;0m"

bonus:		${NAME}

run:
			@make
			@./replace main.cpp jchotel Jchotel

clean:
			@rm -f ${OBJS}
			@echo "\033[1;31mReplace : Removing .o files\033[0;0m"

fclean:		clean
			@rm -f ${NAME}
			@rm -f main.cpp.replace
			@echo "\033[1;31mReplace : Removing binary file\033[0;0m"

re:			fclean all

.PHONY:		all clean fclean re
