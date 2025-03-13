# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njung <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 14:10:21 by njung             #+#    #+#              #
#    Updated: 2024/11/07 14:14:32 by njung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBC = ar rc
LIBR = ranlib
CC = cc
CFLAGS = -Wall -Werror -Wextra
INCS = .
NAME = libftprintf.a
LIB = ft_printf.c ft_ischar.c ft_isint.c ft_ishexa.c ft_isstr.c ft_isunsigned.c ft_itoa.c ft_isptr.c
OBJS = $(SRCS:.c=.o)
SRCS = ${LIB}
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}
${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}
clean:
	rm -f $(OBJS)
all: $(NAME)
fclean: clean
	rm -f $(NAME)
re: fclean all
