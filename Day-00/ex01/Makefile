SRC= main.cpp PhoneBook.cpp

OBJ= $(SRC:.cpp=.o)

NAME= myPhoneBook

all: $(NAME)

$(NAME):$(OBJ)
	c++ -Wall -Wextra -Werror -fsanitize=address -g -std=c++98 $(OBJ) -o $@

%.o:%.cpp *.hpp
	c++ -Wall -Wextra -Werror -fsanitize=address -g -std=c++98 -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean