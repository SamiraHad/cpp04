/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 09:18:12 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/24 09:40:26 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Brain.hpp"
 
 
 Brain::Brain()
 {
    std::cout << "Brain default constructor called" << std::endl;
 }
 
Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = other._ideas[i];
    }
        
}
Brain& Brain::operator=( const Brain& other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            {
                _ideas[i] = other._ideas[i];
            }
    }
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called" << std::endl;
}