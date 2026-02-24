/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:08:16 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 11:10:58 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
const AAnimal* dog = new Dog();
const AAnimal* cat = new Cat();

std::cout << std::endl;

dog->makeSound();
cat->makeSound();

std::cout << std::endl;


delete dog;//should not create a leak
delete cat;


return 0;
}

/* const AAnimal* j = new Dog();

  1 AAnimal
  2 Brain
  3 Cat

AAnimal default constructor called
Brain default constructor called
Dog default constructor called */

/*On ne peut par faire : AAnimal animal;
                         const AAnimal* cat = new AAnimal()*/