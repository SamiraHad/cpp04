/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:08:14 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 15:10:20 by hsamira          ###   ########.fr       */
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
        std::string _name;
        
    public:
        Animal();
        Animal(const std::string name);
        Animal(const Animal& other);
        Animal& operator=( const Animal& other);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif

