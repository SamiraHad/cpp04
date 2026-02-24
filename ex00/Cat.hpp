/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:43 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 15:10:25 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include <string>
#include <iostream>
#include "Animal.hpp"


class Cat : public Animal
{
      public:
        Cat();
        Cat(const std::string name);
        Cat(const Cat& other);
        Cat& operator=( const Cat& other);
        ~Cat();
        virtual void makeSound() const;
};

#endif