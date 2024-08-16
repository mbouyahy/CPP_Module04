/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:05:02 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:27:55 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    // std::cout << "Cure : Default Constructor Called" << std::endl;
    type = "cure";
}

Cure::~Cure(void)
{
    // std::cout << "Cure : Destructor Called" << std::endl;
    type = "cure";
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    // std::cout << "Cure : Copy Constructor Called" << std::endl;
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    // std::cout << "Cure : Copy Assingment Called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
