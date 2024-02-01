NAME = brain

SRCS_NAME =	Zombie.cpp randomChump.cpp\
			main.cpp newZombie.cpp\

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