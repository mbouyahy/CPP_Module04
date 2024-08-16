/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:37:59 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:23:33 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout<< "WrongCat : Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout<< "WrongCat : copy constructor called" << std::endl;
    *this = other;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout<< "WrongCat : copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout<< "WrongCat : Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout<< "WrongCat : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout<< "WrongCat sound" << std::endl;
}
