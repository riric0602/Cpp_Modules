# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 13:27:42 by rchbouki          #+#    #+#              #
#    Updated: 2023/12/05 10:25:09 by rchbouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -f
HEADER = ./includes
SRCS =	srcs/main.cpp \
		srcs/Weapon.cpp \
		srcs/HumanA.cpp \
		srcs/HumanB.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = violence

.cpp.o :
	@${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.cpp=.o}
	
${NAME} : ${OBJS}
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all : ${NAME}

clean :
	@${RM} ${OBJS}

fclean : clean
	@${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
