/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouazir <mlouazir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:18:54 by mlouazir          #+#    #+#             */
/*   Updated: 2024/09/25 17:38:55 by mlouazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void f() {
    system("leaks prog");
}

int main() {

    atexit(f);
    {
        IMateriaSource* src = new MateriaSource();
        Ice *c = new Ice();
        Cure *x = new Cure();
        src->learnMateria(c);
        src->learnMateria(x);
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        delete tmp;
        tmp = src->createMateria("cure");
        me->equip(tmp);
        delete tmp;
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
        delete x;
        delete c;
    }

    std::cout << "================================================\n";
    
    {
        IMateriaSource* src = new MateriaSource();
        Ice *c = new Ice();
        Cure *x = new Cure();
        src->learnMateria(c);
        src->learnMateria(x);
        Character* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        delete tmp;
        tmp = src->createMateria("cure");
        me->equip(tmp);
        delete tmp;

        Character bob(*me);

        me->use(0, bob);
        me->use(1, bob);


        bob.use(0, *me);
        bob.use(1, *me);
        delete me;
        delete src;
        delete x;
        delete c;
    }
    
    return 0;
}