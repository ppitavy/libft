# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 06:07:42 by ppitavy           #+#    #+#              #
#    Updated: 2021/02/01 08:45:23 by ppitavy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME            = libft.a

SRCS            =    ft_isalnum.c ft_isprint.c ft_memcmp.c \
                    ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
                    ft_memcpy.c ft_strchr.c  ft_strlcpy.c \
                    ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
                    ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c \
                    ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
                    ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
OBJS            = $(SRCS:.c=.o)

BONUS           =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstmap.c
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