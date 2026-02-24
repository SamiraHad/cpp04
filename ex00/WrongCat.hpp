/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:43:43 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 15:10:25 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP


#include <string>
#include <iostream>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
      public:
        WrongCat();
        WrongCat(const std::string name);
        WrongCat(const WrongCat& other);
        WrongCat& operator=( const WrongCat& other);
        ~WrongCat();
        void makeSound() const;
};

#endif