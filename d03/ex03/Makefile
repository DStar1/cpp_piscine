NAME = NinjaTrap

SRC = *.cpp

all: $(NAME)

FLAGS = -Wall -Werror -Wextra

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all