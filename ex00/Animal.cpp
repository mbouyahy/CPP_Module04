/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:38:58 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/01 17:47:04 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout<< "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout<< "Animal : copy constructor called" << std::endl;
    *this = other;
}

Animal::Animal(std::string type)
{
    std::cout<< "Animal : constructor with parameter called" << std::endl;
    this->type = type;
}
Animal::~Animal(void)
{
    std::cout<< "Animal : Destructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
    std::cout<< "Animal : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout<< "Animal sound" << std::endl;
}

std::string    Animal::getType() const
{
    return (this->type);
}