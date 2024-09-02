#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    if (N <= 0)
        return (NULL);
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        zombies[i].setZombieName(name);
        if (i == N - 1)
            zombies[i].setZombieName("MED");
    }

    return zombies;
}