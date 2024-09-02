#include "Zombie.hpp"

int main()
{
    Zombie *test1 =  newZombie(NULL);

    test1->announce();

    randomChump("zombie-2");

    delete(test1);
    return 0;
}