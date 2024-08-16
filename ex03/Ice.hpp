/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:04:37 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/01 17:45:08 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        std::string type;
    public:
        Ice(void);
        ~Ice(void);
        Ice(const Ice &other);
        Ice &operator=(const Ice &other);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif