/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:39:11 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/20 13:16:49 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *Brn;
    public:
        Dog(void);
        Dog(std::string type);
        Dog(const Dog &other);
        ~Dog(void);
        Dog &operator=(const Dog &other);

        void    makeSound() const;
};

#endif