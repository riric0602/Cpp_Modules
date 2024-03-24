# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 22:15:52 by rchbouki          #+#    #+#              #
#    Updated: 2023/12/05 21:59:20 by rchbouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -f
HEADER = .
SRCS =	Fixed.cpp \
		main.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = fixed

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
