# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 06:07:42 by ppitavy           #+#    #+#              #
#    Updated: 2021/01/12 06:45:56 by ppitavy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME            = libft.a

SRCS            =    ft_isalnum.c ft_isprint.c ft_memcmp.c \
                    ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
                    ft_memcpy.c ft_strchr.c  ft_strlcpy.c \
                    ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
                    ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c \
                    ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
                    ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
OBJS            = $(SRCS:.c=.o)

BONUS           =   
BONUS_OBJS      = $(BONUS:.c=.o)

CC              = gcc
RM              = rm -f
CFLAGS          = -Wall -Wextra -Werror -I.

all:            $(NAME)

$(NAME):        $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:         clean
				$(RM) $(NAME)

re:             fclean $(NAME)

bonus:          $(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:         all clean fclean re bonus