/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:37:49 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/30 18:05:24 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout<< "WrongAnimal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout<< "WrongAnimal : copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout<< "WrongAnimal : constructor with parameter called" << std::endl;
    this->type = type;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout<< "WrongAnimal : Destructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout<< "WrongAnimal : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout<< "WrongAnimal sound" << std::endl;//test
}

std::string    WrongAnimal::getType() const
{
    return (this->type);//test
}
