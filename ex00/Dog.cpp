/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 09:58:45 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called " << std::endl;
    _name = "";
    _type = "Dog";
}

Dog::Dog(const std::string name) : Animal(name)
{
    std::cout << "Dog " << _name << " constructor called" << std::endl;
    _name = name;
    _type = "Dog";
}
    
Dog::Dog( const Dog& other ) : Animal(other)

{
    std::cout << "Dog copy constructeur called" << std::endl;
   _name = other._name;
    _type = other._type;
}
    
Dog& Dog::operator=( const Dog& other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if(this != &other)
    {
        _name = other._name;
        _type = other._type;
    }
    return(*this);
}
    
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}