/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:40 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 15:45:39 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called " << std::endl;
    _name = "";
    _type = "WrongCat";
}

WrongCat::WrongCat(const std::string name) : WrongAnimal(name)
{
    std::cout << "WrongCat " << _name << "constructor called" << std::endl;
    _name = name;
    _type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal(other)

{
    std::cout << "WrongCat copy constructor called" << std::endl;
    _name = other._name;
    _type = other._type;
}

WrongCat& WrongCat::operator=( const WrongCat& other)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if(this != &other)
    {
        _name = other._name;
        _type = other._type;
    }
    return(*this);
}


WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat meows" << std::endl;
}