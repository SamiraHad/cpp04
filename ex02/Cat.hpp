/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:43 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 14:16:27 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal
{
      private:
        Brain* _brainCat;
      
      public:
        Cat();
        Cat(const std::string name);
        Cat(const Cat& other);
        Cat& operator=( const Cat& other);
        ~Cat();
        virtual void makeSound() const;
};

#endif