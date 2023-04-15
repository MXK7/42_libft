# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 16:02:49 by mpoussie          #+#    #+#              #
#    Updated: 2023/04/15 20:51:44 by mpoussie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -I.

SRCS    		=	ft_isalnum.c \
					ft_isprint.c \
					ft_strncmp.c \
					ft_isalpha.c \
					ft_memcpy.c \
					ft_strchr.c \
					ft_strlcpy.c \
					ft_tolower.c \
					ft_isascii.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_strdup.c \
					ft_strlen.c \
					ft_strrchr.c \
					ft_toupper.c \
					ft_isdigit.c \
					ft_atoi.c \
					ft_memcmp.c \
					ft_bzero.c \
					ft_strnstr.c \
					# ft_putnbr_fd.c \
					# ft_calloc.c \
					# ft_split.c \
					# ft_strlcat.c \
					# ft_itoa.c \
					# ft_substr.c \
					# ft_memchr.c \
					# ft_putchar_fd.c \
					# ft_memset.c  \
					# ft_putendl_fd.c \
					# ft_putstr_fd.c \
					# ft_strjoin.c \
					# ft_strmapi.c \
					# ft_strtrim.c \

OBJS			=	$(SRCS:.c=.o)

# BONUS			=	# ft_lstadd_back.c \
					# ft_lstadd_front.c \
					# ft_lstclear.c \
					# ft_lstdelone.c \
					# ft_lstiter.c \
					# ft_lstlast.c \
					# ft_lstmap.c \
					# ft_lstnew.c \
					# ft_lstsize.c \

# BONUS_OBJS		= 	$(BONUS:.c=.o)

all: ${NAME}

${NAME}:		${OBJS} 
				ar rcs $(NAME)
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)
fclean:
				$(RM) $(OBJS)
re: fclean ${NAME}

.PHONY: all, clean, fclean, re