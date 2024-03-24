# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 18:49:27 by rchbouki          #+#    #+#              #
#    Updated: 2024/02/23 19:24:52 by rchbouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -pedantic
RM = rm -f
HEADER = .
OBJS = ${SRCS:.cpp=.o}
SRCS = main.cpp
NAME = template

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