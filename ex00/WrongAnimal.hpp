/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 10:08:14 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 15:10:20 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP


#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
        std::string _name;
        
    public:
        WrongAnimal();
        WrongAnimal(const std::string name);
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=( const WrongAnimal& other);
        ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
};

#endif

