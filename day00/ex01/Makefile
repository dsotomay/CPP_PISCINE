NAME = phone_book

FLAGS = -Wall -Wextra -Werror -g

SRCS = awesome_phonebook.cpp

OBJ = 

all: $(NAME)

$(NAME): $(SRCS)
	g++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
