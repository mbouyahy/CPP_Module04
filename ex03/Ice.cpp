/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:04:46 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:28:34 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    // std::cout << "Ice : Default Constructor Called" << std::endl;
    type = "ice";
}

Ice::~Ice(void)
{
    // std::cout << "Ice : Destructor Called" << std::endl;
    type = "ice";
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    // std::cout << "Ice : Copy Constructor Called" << std::endl;
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    // std::cout << "Ice : Copy Assingment Called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
