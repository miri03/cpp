CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

RM = rm -rf

CFILE = checks.cpp main.cpp ScalarConverter.cpp \

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