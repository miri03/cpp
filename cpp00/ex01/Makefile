CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

RM = rm -rf

CFILE = main.cpp search.cpp

OFILE = ${CFILE:.cpp=.o}

CC = clang++

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