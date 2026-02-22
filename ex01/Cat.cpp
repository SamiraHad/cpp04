/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:40 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 13:45:51 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    _brainCat = new Brain();
    std::cout << "Cat default constructor called " << std::endl;
}

Cat::Cat(const std::string type) : Animal(type)
{
    _type = "Cat";
    _brainCat = new Brain();
    std::cout << "Cat " << _type << " called" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal(other)

{
    std::cout << "Cat copy constructeur called" << std::endl;
    _brainCat = new Brain(*other._brainCat);
}

Cat& Cat::operator=( const Cat& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        delete _brainCat;
        _brainCat = new Brain(*other._brainCat);
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return(*this);
}


Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brainCat;
}

void Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}