/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:51 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 14:17:00 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
  private:    
        Brain* _brainDog;  
        
  public:
        Dog();
        Dog(const std::string type);
        Dog(const Dog& other);
        Dog& operator=( const Dog& other);
        ~Dog();
        virtual void makeSound() const;
};

#endif