#CFLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS =  -std=c++98

NAME = account

RM = rm -rf

CFILE = Account.cpp tests.cpp

OFILE = ${CFILE:.cpp=.o}

CC = c++

all : $(NAME)

%.o : %.cpp
	${CC} ${CFLAGS} ${CFILE} -c

$(NAME) : $(OFILE)
	$(CC) $(CFLAGS) $(OFILE) -o $(NAME)

clean:
	$(RM) $(OFILE) $(OBONUS)

fclean : clean
	$(RM) $(NAME) $(BONUS)

re : fclean all