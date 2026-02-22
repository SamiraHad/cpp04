/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 13:46:13 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog" ;
    _brainDog = new Brain();
    std::cout << "Dog default constructor called " << std::endl;
}

Dog::Dog(const std::string type) : Animal(type)
{
    _type = "Dog";
    _brainDog = new Brain();
    std::cout << "Dog " << _type << " called" << std::endl;
}
    
Dog::Dog( const Dog& other ) : Animal(other)

{
    std::cout << "Dog copy constructeur called" << std::endl;
    _brainDog = new Brain(*other._brainDog);
}
    
Dog& Dog::operator=( const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
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