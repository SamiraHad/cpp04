/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:08:16 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 09:15:32 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{

const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << std::endl;

delete j;//should not create a leak
delete i;

std::cout << std::endl;
std::cout << std::endl;

const int size = 5;

if(size <=0 || size % 2 != 0)
{
    std::cout << "Size must be positive and even." << std::endl;
    return 1;
}

Animal* animals[size];

std::cout << std::endl;

for( int i = 0; i < size/2; i++)
    animals[i] = new Dog();
    
std::cout << std::endl;

for(int i = size/2; i < size; i++)
    animals[i] = new Cat("micha");

std::cout << std::endl;

for(int i = 0; i < size; i++)
    delete animals[i];
std::cout << std::endl;

return 0;
}

/* const Animal* j = new Dog();

  1 Animal
  2 Brain
  3 Cat

Animal default constructor called
Brain default constructor called
Dog default constructor called */