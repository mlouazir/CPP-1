SRC= megaphone.cpp

OBJ= megaphone.o

NAME= megaphone

all: $(NAME)

$(NAME):$(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $@

%.o:%.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean