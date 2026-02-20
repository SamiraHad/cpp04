/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:08:14 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/20 11:19:45 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;
        
    public:
        Animal();
        Animal(const std::string type);
        Animal(const Animal& other);
        Animal& operator=( const Animal& other);
        ~Animal();
        virtual void makeSound() const;
};

class Dog : public Animal
{
      public:
        Dog();
        Dog(const std::string type);
        Dog(const Dog& other);
        Dog& operator=( const Dog& other);
        ~Dog();
        virtual void makeSound() const;
};

class Cat : public Animal
{
      public:
        Cat();
        Cat(const std::string type);
        Cat(const Cat& other);
        Cat& operator=( const Cat& other);
        ~Cat();
        virtual void makeSound() const;
};

#endif

