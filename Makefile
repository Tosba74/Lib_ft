NAME	= libft.a

PATH_I	= includes/

PATH_S	= srcs/

PATH_O	= bin/

HDRS	= libft.h

FILES	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
		  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		  ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
		  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
		  ft_check_base.c ft_atoi_base.c ft_itoa_base.c ft_putnbr_base.c \
		  ft_putchar.c ft_putstr.c ft_putnbr.c ft_isspace.c ft_strstr.c \
		  ft_strcat.c ft_strncat.c ft_strncpy.c ft_split_whitespaces.c \
		  ft_strcmp.c

FILES_B	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		  ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \

OBJS	= ${FILES:.c=.o}

OBJS_B	= ${FILES_B:.c=.o}

INC		= ${addprefix ${PATH_I}, ${HDRS}}

SRCS	= ${addprefix ${PATH_S}, ${FILES}}

TMP		= ${addprefix ${PATH_S}, ${OBJS}}

TMP_B	= ${addprefix ${PATH_S}, ${OBJS_B}}

BIN		= ${addprefix ${PATH_O}, ${OBJS}}

BIN_B	= ${addprefix ${PATH_O}, ${OBJS_B}}

CC		= clang

FLAGS	= -Wall -Wextra -Wall

AR		= ar rcs

MV		= mv

RM		= rm

I_LIB	= ranlib

all :		${NAME} ${BONUS}

%.o : %.c
	${CC} ${FLAGS} -o $@ -c $< -I ${INC}

${NAME}	:	${TMP}
	${MV} $? ${PATH_O}
	${AR} $@ ${BIN}
	${I_LIB} $@

bonus :		${TMP_B}
	${MV} $? ${PATH_O}
	${AR} ${NAME} ${BIN_B}
	${I_LIB} ${NAME}

clean : 
	${RM} ${BIN} ${BIN_B}

fclean :	clean
	${RM} ${NAME}

re:			fclean all

.PHONY:		bonus clean fclean all re
