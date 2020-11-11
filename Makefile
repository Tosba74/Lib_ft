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

HEADER	= ./includes/libft.h

P_FIX	= ./srcs/

FILES 	= ft_atoi.c ft_atoi_base.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
	ft_itoa_base.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl_fd.c \
	ft_putnbr.c ft_putnbr_base.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	ft_split.c ft_split_whitespaces.c ft_strcat.c ft_strchr.c ft_strcmp.c \
	ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
	ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strstr.c ft_strtrim.c \
	ft_substr.c ft_tolower.c ft_toupper.c

FILES_B	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRC		= $(addprefix ${P_FIX},${FILES})

SRC_B	= $(addprefix ${P_FIX},${FILES_B})

OBJS	= ${SRC:.c=.o}

OBJS_B	= ${SRC_B:.c=.o}

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

AR		= ar rc

I_LIB	= ranlib

RM		= rm -f

.SILENT:

_BLACK=\x1b[30m
_R=\x1b[31m
_G=\x1b[32m
_Y=\x1b[33m
_B=\x1b[34m
_P=\x1b[35m
_C=\x1b[36m
_E=\x1b[0m

all:			${OBJS}
		${AR} ${NAME} ${OBJS}
		echo "${_P}-----${_E}\t${_R}   creating archive${_E}\t${_P}-----${_E}"
		ranlib ${NAME}
		sleep 0.5
		echo "${_P}-----${_E}\t${_R}    library index${_E}\t${_P}-----${_E}"
		sleep 1.5
		${MONKEY}
		clear
		echo "\n"
		echo "$(_C)    _/       _/ _/            _/_/   _/$(_E)"
		echo "$(_C)   _/          _/_/_/      _/     _/_/_/_/$(_E)"
		echo "$(_C)  _/       _/ _/    _/  _/_/_/_/   _/$(_E)"
		echo "$(_C) _/       _/ _/    _/    _/       _/$(_E)"
		echo "$(_C)_/_/_/_/ _/ _/_/_/      _/         _/_/$(_E)"
		echo "${_B}                          is ready !!!${_E}"
		echo "\n"

.c.o:
		echo "${_Y}compiling >>>${E}${_G} $<${_E}"
		${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}:		${OBJS}
		${AR} ${NAME} ${OBJS}
		${I_LIB} ${NAME}

bonus:		${OBJS_B}
		${AR} ${NAME} ${OBJS_B}
		${I_LIB}${NAME}

clean:		monkey
		echo "${_P}$@ ${_E}${_R}ecrase your objets !${_E}"
		${RM} ${OBJS} ${OBJS_B}

fclean:		monkey clean
		echo "${_P}$@ ${_E}${_R}ecrase all !!!${_E}"
		${RM} ${NAME}

monkey:
		clear
		echo "$(_R)        o$(_E)"
		echo "$(_R)     ' /_\ '$(_E)"
		echo "$(_Y)    - (o o) -$(_E)"
		echo "$(_G) -$(_E)$(_Y)ooO$(_E)$(_G)--$(_E)$(_Y)(_)$(_E)$(_G)--$(_E)$(_Y)Ooo$(_E)$(_G)-$(_E)"
		sleep 1
		clear
		echo "$(_R)        o$(_E)"
		echo "$(_R)     ' /_\ '$(_E)"
		echo "$(_Y)    - (o -) -$(_E)"
		echo "$(_G) -$(_E)$(_Y)ooO$(_E)$(_G)--$(_E)$(_Y)(_)$(_E)$(_G)--$(_E)$(_Y)Ooo$(_E)$(_G)-$(_E)"
		sleep 0.5
		clear
		echo "$(_R)        o$(_E)"
		echo "$(_R)     ' /_\ '$(_E)"
		echo "$(_Y)    - (o o) -$(_E)"
		echo "$(_G) -$(_E)$(_Y)ooO$(_E)$(_G)--$(_E)$(_Y)(_)$(_E)$(_G)--$(_E)$(_Y)Ooo$(_E)$(_G)-$(_E)"
		sleep 0.5

re:			monkey fclean all

.PHONY:		clean fclean all re monkey
