/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:56:37 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/01 17:41:33 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
    // std::cout << "AMateria : Default Constructor Called" << std::endl;
}

AMateria::~AMateria(void)
{
    // std::cout << "AMateria : Destructor Called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    // std::cout << "AMateria : Copy Constructor Called" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    // std::cout << "AMateria : Copy Assingment Called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return (*this);
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

