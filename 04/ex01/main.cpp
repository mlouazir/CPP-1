/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:54 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 17:39:51 by mlouazir         ###   ########.fr       */
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
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j; // Should not create a leak
        delete i;
    }

    std::cout << "================================================\n";

    {
        Animal *animals[10];
        
        for (int i = 0; i < 6; i++)
        {
            if (i % 2)
                animals[i] = new Dog;
            else
                animals[i] = new Cat;
        }

        for (int i = 0; i < 6; i++) {
            delete animals[i];
        }
    }

    std::cout << "================================================\n";

    {    
        Brain b1;

        b1.setIdea("test");

        std::string* ideas1 = b1.getIdeas();

        std::cout << ideas1[1] << "\n";
        
        Brain b2(b1);

        std::string* ideas = b2.getIdeas();

        b2.setIdea("Ttest--2");

        std::cout << ideas[1] << "\n";
    }

    std::cout << "================================================\n";

    {
        Cat c1;

        c1.setIdea("Idea 1");

        Brain b = c1.getBrain();

        std::string* ideasC1 = b.getIdeas();

        Cat c2(c1);

        c2.setIdea("Idea 2");

        Brain b2 = c2.getBrain();

        std::string* ideasC2 = b2.getIdeas();

        std::cout << ideasC1[1] << "\n";
        std::cout << ideasC2[1] << "\n";
    }

    {
        Dog basic;
        {
            Dog tmp = basic;
        }
        Brain b = basic.getBrain();
        b.setIdea("hwllo");
    }
    return 0;
}