CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Serialize

RM = rm -rf

CFILE = Serialize.cpp main.cpp \

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