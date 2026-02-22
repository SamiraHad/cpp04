/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 14:16:43 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal()
{
    _type = "Dog" ;
    _brainDog = new Brain();
    std::cout << "Dog default constructor called " << std::endl;
}

Dog::Dog(const std::string type) : AAnimal(type)
{
    _type = "Dog";
    _brainDog = new Brain();
    std::cout << "Dog " << _type << " called" << std::endl;
}
    
Dog::Dog( const Dog& other ) : AAnimal(other)

{
    std::cout << "Dog copy constructeur called" << std::endl;
    _brainDog = new Brain(*other._brainDog);
}
    
Dog& Dog::operator=( const Dog& other)
{
    if(this != &other)
    {
        AAnimal::operator=(other);
        delete _brainDog;
        _brainDog = new Brain(*other._brainDog);
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return(*this);
}
    
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brainDog;
}

void Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}