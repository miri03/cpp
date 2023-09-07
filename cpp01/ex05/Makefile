CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Harl

RM = rm -rf

CFILE = $(wildcard *.cpp)

CC = c++

OFILE = ${CFILE:.cpp=.o}

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

$(NAME) : $(OFILE)
	$(CC) $(CFLAGS) $(OFILE) -o $(NAME)

clean:
	$(RM) $(OFILE) $(OBONUS)

fclean : clean
	$(RM) $(NAME) $(BONUS)

re : fclean all