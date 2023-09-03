CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

RM = rm -rf

CFILE = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OFILE = ${CFILE:.cpp=.o}

CC = c++

all : $(NAME)

$(NAME) : $(OFILE)
	$(CC) $(CFLAGS) $(OFILE) -o $(NAME)

clean:
	$(RM) $(OFILE) $(OBONUS)

fclean : clean
	$(RM) $(NAME) $(BONUS)

re : fclean all