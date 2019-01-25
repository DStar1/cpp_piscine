NAME = examples

SRC = $(NAME).cpp

INC = $(NAME).hpp

all: $(NAME)

$(NAME):
	g++ -Wall -Werror -Wextra $(SRC) main.cpp -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all