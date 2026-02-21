/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:40 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/21 14:58:28 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called " << std::endl;
}

Cat::Cat(const std::string type) : Animal(type)
{
    std::cout << "Cat " << _type << " called" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal(other)

{
    std::cout << "Cat copy constructeur called" << std::endl;
    *this = other;
}

Cat& Cat::operator=( const Cat& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
    }

    std::cout << "Cat assignment operator called" << std::endl;
  
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Cat meows" << std::endl;
}