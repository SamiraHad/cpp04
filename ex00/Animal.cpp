/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:09:04 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/21 13:37:29 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string type):_type(type)
{
    std::cout << "Animal " << _type << " called" << std::endl;
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

void Animal::makeSound()
{
    std::cout << "Animal parle " << std::endl;
}
