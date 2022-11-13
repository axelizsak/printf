# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aizsak <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:49:45 by aizsak            #+#    #+#              #
#    Updated: 2022/11/12 11:42:38 by aizsak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_printf
SRCS		= $(addsuffix .c, ${SRC})

HEAD		= ./includes/ 

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
