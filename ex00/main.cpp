/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:08:16 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 09:53:53 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    
    const Animal* meta = new Animal(); //Animal default constructor called
    const Animal* j = new Dog(); //Animal default constructor called, Dog default constructor called 
    const Animal* i = new Cat(); //Animal default constructor calle , Cat default constructor called 
    
    std::cout << std::endl;
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;
    
    std::cout << std::endl;
    std::cout << " Test sans virtual " <<std::endl;
    std::cout << std::endl;

    const WrongAnimal* beta = new WrongAnimal(); //Animal default constructor called
    const WrongAnimal* l = new WrongCat(); //Animal default constructor calle , Cat default constructor called 
    
    std::cout << std::endl;
    
    std::cout << l->getType() << " " << std::endl;
    l->makeSound(); //will output the cat sound!
    beta->makeSound();

    std::cout << std::endl;

    delete l;
    delete beta;

    {
        Dog basic;
        {
            Dog tmp = basic;
        }
    }
    
    return 0;
}