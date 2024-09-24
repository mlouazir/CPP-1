SRC=main.cpp Cure.cpp Ice.cpp AMateria.cpp Character.cpp

OBJ=$(SRC:.cpp=.o)

FLAGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

NAME=prog

all:$(NAME)

$(NAME):$(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o : %.cpp AMateria.hpp Cure.hpp Ice.hpp Character.hpp ICharacter.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:clean