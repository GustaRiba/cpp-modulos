# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/01 09:44:12 by gmorais-          #+#    #+#              #
#    Updated: 2024/03/04 11:20:39 by gmorais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRCS_NAME = main.cpp Harl.cpp\
			
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -I. -g -fsanitize=address

RM = rm -rf

OBJS = $(SRCS_NAME:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		
clean:
		rm -rf $(NAME)

fclean: clean

re: fclean all