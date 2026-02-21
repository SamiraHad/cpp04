/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:47 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/21 14:42:38 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called " << std::endl;
}

Dog::Dog(const std::string type) : Animal(type)
{
    std::cout << "Dog " << _type << " called" << std::endl;
}
    
Dog::Dog( const Dog& other ) : Animal(other)

{
    std::cout << "Dog copy constructeur called" << std::endl;
    *this = other;
}
    
Dog& Dog::operator=( const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return(*this);
}
    
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Dog bark" << std::endl;
}