# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 16:02:49 by mpoussie          #+#    #+#              #
#    Updated: 2023/04/12 18:35:02 by mpoussie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

SRCS    		=	ft_isalpha.c \
					ft_isascii.c \
					ft_strcat.c \
					ft_strdup.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strncat.c \
					ft_strncpy.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_strrchr.c \
OBJS			=	$(SRCS:.c=.o)

BONUS			=	ft_lstadd_back.c \
					ft_lstadd_front.c \ 
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \ 
					ft_lstlast.c \
					ft_lstmap.c \ 
					ft_lstnew.c \
					ft_lstsize.c \
BONUS_OBJS		= $(BONUS:.c=.o)

${NAME}:		
				${OBJS} ar rcs $(NAME) $(OBJS)
all :			
				${NAME}
clean: 
				$(RM) $(OBJS) $(BONUS_OBJS)
fclean:			
				clean $(RM) $(NAME)
re:				
				fclean $(NAME)
bonus:			
				$(OBJS) $(BONUS_OBJS) ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)