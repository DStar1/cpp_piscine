NAME = ZombieHorde

SRC = $(NAME).cpp Zombie.cpp main.cpp

all: $(NAME)

$(NAME):
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all