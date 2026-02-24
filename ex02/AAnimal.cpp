/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:09:04 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 09:06:38 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():_name("")
{
    std::cout << "AAnimal default constructor called" << std::endl;
    _type = "AAnimal";
}

AAnimal::AAnimal(const std::string name):_name(name)
{
    std::cout << "AAnimal " << _name<< " called" << std::endl;
    _type = "AAnimal";
}
AAnimal::AAnimal( const AAnimal& other)
{
    std::cout << "AAnimal copy constructeur called" << std::endl;
    _name = other._name;
    _type = other._type;
}
AAnimal& AAnimal::operator=( const AAnimal& other)
{
    std::cout << "AAnimal assignment operator called" << std::endl; 
    if( this != &other)
    {
        _name = other._name;
        _type = other._type;
    }
    return(*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return(_type);   
}

/*void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound " << std::endl;
}*/
