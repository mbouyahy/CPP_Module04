/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:44:25 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/01 17:50:24 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal **meta = new Animal*[100];
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    
    // delete j;//should not create a leak
    // delete i;
    for (int i = 0; i < 50; i++)
    {
        meta[i] = new Dog();
    }
    
    for (int i = 50; i < 100; i++)
    {
        meta[i] = new Cat();
    }
    
    for (int i = 0; i < 100; i++)
    {
        delete meta[i];
    }
    delete[] meta;
    return 0;
}