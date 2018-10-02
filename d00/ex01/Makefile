NAME = phoneBook1

EXE= a.a

SRC = 	$(NAME).cpp

INC = $(NAME).hpp

all: $(NAME)

$(NAME):
	g++ -c -Wall -Werror -Wextra $(SRC) -I $(INC)
	ar rc $(EXE) *.o
	ranlib $(EXE)
	g++ $(EXE) main.cpp -o $(NAME)
	# g++ -Wall -Werror -Wextra $(SRC) main.c -I $(INC) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all