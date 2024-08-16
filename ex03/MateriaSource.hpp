/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:37:15 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/25 13:44:38 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inv[4];
    public:
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif