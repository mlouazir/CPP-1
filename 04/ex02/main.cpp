/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:54 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 15:24:39 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void f() {
    system("leaks prog");
}

int main() {

    atexit(f);

    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        delete j;
        delete i;
    }

    std::cout << "================================================\n";

    {
        AAnimal *Aanimals[10];
        
        for (int i = 0; i < 6; i++)
        {
            if (i % 2)
                Aanimals[i] = new Dog;
            else
                Aanimals[i] = new Cat;
        }

        for (int i = 0; i < 6; i++) {
            delete Aanimals[i];
        }
    }

    std::cout << "================================================\n";

    {
        // AAnimal a;
        Cat c;
        AAnimal *a;
        AAnimal &b = c;
    }
    
    return 0;
}