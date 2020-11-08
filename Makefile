# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 11:21:40 by bmangin           #+#    #+#              #
#    Updated: 2020/11/04 01:14:15 by bmangin          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

HEADER	= libft.h

FILES 	= libc/*.c \
		libcsupp/*c \
		libcbonus/*.c \
		libcperso/*.c

OBJS	= ${FILES:.c=.o}

CC		= gcc

FLAGS = -Wall -Wextra -Werror -I. -c

RM		= rm -f

CFLAGS	= -Werror -Wall -Wextra 

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: 	$(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re