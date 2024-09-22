SRC=ScavTrap.cpp ClapTrap.cpp FragTrap.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

FLAGS=-Wall -Wextra -Werror -std=c++98 # -fsanitize=address -g

NAME=fragTrap

all:$(NAME)

$(NAME):$(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:clean