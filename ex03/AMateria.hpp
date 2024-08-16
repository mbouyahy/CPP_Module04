/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:56:40 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/27 15:42:41 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;//problem of circular dependency // solution is forward declaration
class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(void);
        virtual ~AMateria(void);
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other);

        AMateria(std::string const & type);
        std::string const & getType() const;//Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif