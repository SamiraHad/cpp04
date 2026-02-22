/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:08:14 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 14:14:18 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP


#include <string>
#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
        std::string _name;
        
    public:
        AAnimal();
        AAnimal(const std::string name);
        AAnimal(const AAnimal& other);
        AAnimal& operator=( const AAnimal& other);
        virtual ~AAnimal();
        
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif

