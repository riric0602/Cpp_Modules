# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 16:29:14 by rchbouki          #+#    #+#              #
#    Updated: 2023/12/05 10:09:00 by rchbouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g -fsanitize=address
RM = rm -f
HEADER = .
SRCS =	main.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = exec

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
