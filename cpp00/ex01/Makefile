# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 12:18:45 by gmorais-          #+#    #+#              #
#    Updated: 2024/01/12 10:43:07 by gmorais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRCS_NAME =	phonebook.cpp main.cpp\
			contact.cpp\

CC = c++
CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

OBJS = $(SRCS_NAME:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		
clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all