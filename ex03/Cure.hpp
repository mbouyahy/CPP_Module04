/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:04:54 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/01 17:45:02 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        std::string type;
    public:
        Cure(void);
        ~Cure(void);
        Cure(const Cure &other);
        Cure &operator=(const Cure &other);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif