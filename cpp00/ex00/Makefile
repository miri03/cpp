CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

RM = rm -rf

CFILE = megaphone.cpp

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