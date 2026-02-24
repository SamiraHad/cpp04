/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 09:38:16 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal()
{
    std::cout << "Dog default constructor called " << std::endl;
    _name = "";
    _type = "Dog" ;
    _brainDog = new Brain();
}

Dog::Dog(const std::string name) : AAnimal(name)
{
    std::cout << "Dog " << _name << " constructor called" << std::endl;
    _name = name;
    _type = "Dog";
    _brainDog = new Brain();
}
    
Dog::Dog( const Dog& other ) : AAnimal(other)

{
    std::cout << "Dog copy constructeur called" << std::endl;
    _name = other._name;
    _type = other._type;
    _brainDog = new Brain(*other._brainDog);
}
    
Dog& Dog::operator=( const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if(this != &other)
    {
        _name = other._name;
        _type = other._type;
        delete _brainDog;
        _brainDog = new Brain(*other._brainDog);
    }
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