/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:37:10 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/01 17:57:03 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void)
{
    for(int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
        {
            delete inv[i];
            inv[i] = NULL;
        }
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for(int i = 0; other.inv[i]; i++)
        {
            if (inv[i])
                delete inv[i];
            inv[i] = other.inv[i]->clone();
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *M)
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] == NULL)
        {
            inv[i] = M;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice")
    {
        return (new Ice());
    }
    else if (type == "cure")
    {
        return (new Cure());
    }
    return (0);
}