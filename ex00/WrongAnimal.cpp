/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:09:04 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 15:39:44 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_name("")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const std::string name):_name(name)
{
    std::cout << "WrongAnimal " << _name<< " constructor called" << std::endl;
    _type = "WrongAnimal";
}
WrongAnimal::WrongAnimal( const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    _name = other._name;
    _type = other._type;
}
WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl; 
    if( this != &other)
    {
        _name = other._name;
        _type = other._type;
    }
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(_type);   
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound " << std::endl;
}
