NAME = Fixed

SRCS_NAME = main.cpp Fixed.cpp\
			
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