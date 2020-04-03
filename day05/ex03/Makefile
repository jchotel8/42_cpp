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

NAME		= intern
SRCSC		= 	Form.cpp\
				Intern.cpp\
				Bureaucrat.cpp\
				RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp\
				PresidentialPardonForm.cpp\
				main.cpp
SRCSH		= 
OBJS		= $(SRCSC:%.cpp=%.o)
LIBS 		= 
FLAGS		= -Wall -Wextra -Werror
CC		= clang++

all:		${NAME}

.c.o: ${OBJS}
	@clang++ ${FLAGS} -cpp $< -o ${<:.cpp=.o}

$(NAME):	${OBJS} ${SRCSH}
			@${CC} ${FLAGS} ${OBJS} ${LIBS} -o ${NAME}
			@echo "\033[1;32m┌─┐┬ ┬┌─┐┌─┐┌─┐┌─┐┌─┐"
			@echo 			"└─┐│ ││  │  ├┤ └─┐└─┐"
			@echo 			"└─┘└─┘└─┘└─┘└─┘└─┘└─┘"
			@echo "Intern generated successfully.\033[0;0m"

bonus:		${NAME}

run:
			@make
			@./intern

clean:
			@rm -f Mayor\'s\ house_shruberry
			@rm -f ${OBJS}
			@echo "\033[1;31mIntern : Removing .o files\033[0;0m"

fclean:		clean
			@rm -f ${NAME}
			@echo "\033[1;31mIntern : Removing binary file\033[0;0m"

re:			fclean all

.PHONY:		all clean fclean re
