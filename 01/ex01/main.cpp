#include "Zombie.hpp"

int main()
{
    Zombie *zo = zombieHorde(5, "t");

    if (zo == NULL)
        return (1);
    for (int i = 0; i < 5; i++)
    {
        zo[i].announce();
    }

    delete[] zo;

    return 0;
}
