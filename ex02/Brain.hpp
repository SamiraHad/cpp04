/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 09:18:18 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/22 11:02:00 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>


class Brain
{
    private:
        std::string _ideas[100];
    
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=( const Brain& other);
        ~Brain();
};

#endif