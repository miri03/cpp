CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = iter

RM = rm -rf

CFILE = main.cpp \

CXX = c++

OFILE = ${CFILE:.cpp=.o}

all : $(NAME)

$(NAME) : $(OFILE)
	$(CXX) $(CXXFLAGS) $(OFILE) -o $(NAME)

clean:
	$(RM) $(OFILE)

fclean : clean
	$(RM) $(NAME)

re : fclean all