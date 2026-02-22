/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:09:04 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 09:06:38 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_name("")
{
    _type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string name):_type(name)
{
    _type = "Animal";
    std::cout << "Animal " << _name<< " called" << std::endl;
}
Animal::Animal( const Animal& other)
{
    *this = other;
    std::cout << "Animal copy constructeur called" << std::endl;
}
Animal& Animal::operator=( const Animal& other)
{
    if( this != &other)
        Animal::operator=(other);
    std::cout << "Animal assignment operator called" << std::endl; 
    return(*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return(_type);   
}

void Animal::makeSound() const
{
    std::cout << "Animal sound " << std::endl;
}
