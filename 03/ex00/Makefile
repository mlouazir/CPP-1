SRC=ClapTrap.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

FLAGS=-Wall -Wextra -Werror -std=c++98 # -fsanitize=address -g

NAME=clapTrap

all:$(NAME)

$(NAME):$(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o : %.cpp ClapTrap.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:clean