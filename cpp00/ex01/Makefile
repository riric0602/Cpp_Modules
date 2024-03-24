# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 19:49:31 by rchbouki          #+#    #+#              #
#    Updated: 2023/11/16 20:30:20 by rchbouki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -f
HEADER = ./includes
SRCS =	srcs/Phonebook.cpp \
		srcs/Contact.cpp \
		srcs/main.cpp
OBJS = ${SRCS:.cpp=.o}
NAME = phonebook

.c.o :
	@${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all : ${NAME}

clean :
	@${RM} ${OBJS}

fclean : clean
	@${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re