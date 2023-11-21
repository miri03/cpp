CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = 28B

RM = rm -rf

CFILE = $(wildcard *.cpp)

CXX = c++

OFILE = ${CFILE:.cpp=.o}

all : $(NAME)

$(NAME) : $(OFILE)
	$(CXX) $(CXXFLAGS) $(OFILE) -o $(NAME)

clean:
	$(RM) $(OFILE) $(OBONUS)

fclean : clean
	$(RM) $(NAME) $(BONUS)

re : fclean all