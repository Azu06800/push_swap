# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 16:27:23 by nhamdan           #+#    #+#              #
#    Updated: 2022/12/18 10:49:22 by nhamdan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

OBJECTS		:=	./bin
SOURCES		:=	./sources
INCLUDES	:=	./includes

FILES 		:=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_islower.c ft_isupper.c ft_isprint.c ft_isspace.c \
				ft_tolower.c ft_toupper.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_putstr_fd.c ft_putunbr_fd.c ft_putunbr_base_fd.c \
				ft_bzero.c ft_calloc.c ft_memccpy.c ft_memchr.c \
				ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c  \
				ft_itoa.c ft_atoi.c ft_split.c \
				ft_strcat.c ft_strchr.c ft_strcpy.c ft_strdup.c \
				ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
				ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
				ft_strtrim.c ft_substr.c ft_striteri.c \
				get_next_line.c \
				ft_printf.c \
				ft_printf/ft_printf_char.c \
				ft_printf/ft_printf_decimal.c \
				ft_printf/ft_printf_hex.c \
				ft_printf/ft_printf_integer.c \
				ft_printf/ft_printf_percent.c \
				ft_printf/ft_printf_ptr.c \
				ft_printf/ft_printf_string.c \
				ft_printf/ft_printf_udecimal.c \
				list/list_create.c \
				list/list_create_node.c \
				list/list_add_front.c \
				list/list_add_back.c \
				list/list_remove.c \
				list/list_clear.c

SRCS		:=	$(addprefix ${SOURCES}/, ${FILES})
OBJS		:=	$(addprefix ${OBJECTS}/, $(FILES:.c=.o))

CC			:=	gcc
CFLAGS		:=	-Wall -Wextra -Werror

BLACK		:=	"\033[1;30m"
RED			:=	"\033[1;31m"
GREEN		:=	"\033[1;32m"
CYAN		:=	"\033[1;35m"
BLUE		:=	"\033[1;36m"
WHITE		:=	"\033[1;37m"
EOC			:=	"\033[0;0m"

${OBJECTS}/%.o : ${SOURCES}/%.c
	@echo "??? Compilation de "$(BLUE)"${notdir $<}"$(EOC)"."
	@mkdir -p $(dir $@)
	@${CC} ${CFLAGS} -c $^ -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@echo $(GREEN)"??? Generation de la librairie ${NAME}..."$(EOC)
	@ar rcs ${NAME} ${OBJS}

clean:
	@rm -rf ${OBJECTS}

fclean: clean
	@rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
