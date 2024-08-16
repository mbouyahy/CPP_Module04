/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:26:04 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/30 20:30:51 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(const Brain &other)
{
    std::cout<< "Brain : Copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = other.ideas[i];
    }
}

Brain::Brain(void)
{
    std::cout<< "Brain : Default constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = "";
    }
}

Brain::~Brain(void)
{
    std::cout<< "Brain : Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
        {
            ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}