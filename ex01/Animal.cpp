/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:09:04 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 09:39:23 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_name("")
{
    std::cout << "Animal default constructor called" << std::endl;
    _type = "Animal";
}

Animal::Animal(const std::string name):_name(name)
{
    std::cout << "Animal " << _name<< " constructor called" << std::endl;
    _type = "Animal";
}
Animal::Animal( const Animal& other)
{
    std::cout << "Animal copy constructeur called" << std::endl;
    _name = other._name;
    _type = other._type;;
}
Animal& Animal::operator=( const Animal& other)
{
    std::cout << "Animal assignment operator called" << std::endl; 
    if( this != &other)
    {
        _name = other._name;
        _type = other._type;
    }
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
