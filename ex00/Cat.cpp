/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:39:33 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:16:41 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout<< "Cat : Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout<< "Cat : copy constructor called" << std::endl;
    *this = other;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout<< "Cat : constructor with parameter called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout<< "Cat : Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout<< "Cat : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout<< "cat sound" << std::endl;
}
