# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aizsak <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:49:45 by aizsak            #+#    #+#              #
#    Updated: 2022/11/18 21:01:00 by aizsak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRSRC		= ./srcs/

DIRINC		= ./includes/

DIRLIB		= ./libft/

DIROBJ		= ./objs/

SRC			= ft_printf ft_pchar ft_pstr ft_pnbr ft_ppercent ft_phexa ft_pnbr_unsigned ft_pptr

SRCS		= $(addprefix ${DIRSRC}, $(addsuffix .c, ${SRC}))

HEAD		= ./includes/

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

NAMELFT		= libft.a

CC			= gcc
RM			= rm -f
AR			= ar rc
RN			= ranlib

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c -I${DIRINC} -I${DIRLIB} $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			cd ${DIRLIB} && ${MAKE} && cp -v ${NAMELFT} ../${NAME}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}

main:		${NAME}
			${CC} -I ${DIRINC} -I ${DIRLIB} ${NAME} main.c
all:		$(NAME)

clean:
			${RM} ${OBJS}
			cd ${DIRLIB} && ${MAKE} clean

fclean:		clean
			${RM} $(NAME)
			cd ${DIRLIB} && ${MAKE} fclean

re:		fclean all

.PHONY:		all clean fclean re
