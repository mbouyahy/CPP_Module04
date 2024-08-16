/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:39:18 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:11:42 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout<< "Dog : Default constructor called" << std::endl;
    Brn = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout<< "Dog : copy constructor called" << std::endl;
    Brn = new Brain(*other.Brn);
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout<< "Dog : constructor with parameter called" << std::endl;
    Brn = new Brain();
}

Dog::~Dog(void)
{
    std::cout<< "Dog : Destructor called" << std::endl;
    if (Brn)
    {
        delete Brn;
        Brn = NULL;
    }
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout<< "Dog : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
        if (Brn)
            delete Brn;
        Brn = new Brain(*other.Brn);
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout<< "Dog sound" << std::endl;
}
