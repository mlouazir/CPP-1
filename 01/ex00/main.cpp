#include "Zombie.hpp"

int main()
{
    Zombie *test1 =  newZombie("zombie-1");

    test1->announce();

    randomChump("zombie-2");

    delete(test1);
    return 0;
}