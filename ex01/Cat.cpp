/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:40 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 09:39:47 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called " << std::endl;
    _name = "";
    _type = "Cat";
    _brainCat = new Brain();
}

Cat::Cat(const std::string name) : Animal(name)
{
    std::cout << "Cat " << Animal::_name << " constructor called" << std::endl;
    _name = name;
    _type = "Cat";
    _brainCat = new Brain();
}

Cat::Cat( const Cat& other ) : Animal(other)

{
    std::cout << "Cat copy constructeur called" << std::endl;
    _name = other._name;
    _type = other._type;
    _brainCat = new Brain(*other._brainCat);
}

Cat& Cat::operator=( const Cat& other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if(this != &other)
    {
       _name = other._name;
        _type = other._type;
        delete _brainCat;
        _brainCat = new Brain(*other._brainCat);
    }
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