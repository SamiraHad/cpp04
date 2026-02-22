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
    _type = "AAnimal";
    std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string name):_type(name)
{
    _type = "AAnimal";
    std::cout << "AAnimal " << _name<< " called" << std::endl;
}
AAnimal::AAnimal( const AAnimal& other)
{
    *this = other;
    std::cout << "AAnimal copy constructeur called" << std::endl;
}
AAnimal& AAnimal::operator=( const AAnimal& other)
{
    if( this != &other)
        AAnimal::operator=(other);
    std::cout << "AAnimal assignment operator called" << std::endl; 
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
