NAME = phoneBook

SRC = $(NAME).cpp Contact.class.cpp showContacts.cpp

INC = Contact.class.hpp

all: $(NAME)

$(NAME):
	clang++ -Wall -Werror -Wextra $(SRC) main.cpp -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all