/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:41:46 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/30 20:20:40 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *Brn;
    public:
        Cat(void);
        Cat(std::string type);
        Cat(const Cat &other);
        ~Cat();
        Cat &operator=(const Cat &other);

        void    makeSound() const;
};

#endif