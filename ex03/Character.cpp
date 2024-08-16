/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:36:49 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:37:08 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(void)
{
    // std::cout << "Character : Default Constructor Called" << std::endl;
    name = "";
    memory_stk = NULL;
    for(int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
}

Character::~Character(void)
{
    // std::cout << "Character : Destructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        delete inv[i];
        inv[i] = NULL;
    }
    stock *temp;
    while (memory_stk)
	{
		temp = memory_stk->next;
        if (memory_stk->address)
        {
            delete memory_stk->address;
            delete(memory_stk);
            memory_stk->address = NULL;
        }
		memory_stk = temp;
	}
    memory_stk = NULL;
}

Character::Character(const Character &other)
{
    // std::cout << "Character : Copy Constructor" << std::endl;
    memory_stk = NULL;
    for(int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
    this->name = other.name;
    for(int i = 0; other.inv[i]; i++)
    {
        if (inv[i])
        {
            delete inv[i];
            inv[i] = NULL;
        }
        inv[i] = other.inv[i]->clone();
    }
}

Character::Character(std::string value)
{
    // std::cout << "Character : Constructor With Paramater Called" << std::endl;
    memory_stk = NULL;
    this->name = value;
    for(int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
}

Character &Character::operator=(const Character &other)
{
    // std::cout << "Character : Copy Assingment Called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        for(int i = 0; other.inv[i]; i++)
        {
            if (inv[i])
            {
                delete inv[i];
                inv[i] = NULL;
            }
            inv[i] = other.inv[i]->clone();
        }
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return(name);
}

void Character::equip(AMateria* M)
{
    int same;
    int counter;
    int status;
    int i = 0;

    status = 0;
    same = 0;
    counter = 0;
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] && M && inv[i] == M && same != 1)
        {
            same = 1;
            break ;
        }
        if (inv[i])
            counter++;
    }
    if (same != 1 && counter != 4)
    {
        for (i = 0; i < 4; i++)
        {
            if (inv[i] == NULL)
            {
                inv[i] = M;
                status = 1;
                break ;
            }
        }
    }
    else if ((i == 3 && status == 0) || counter == 4)
    {
        stock *temp;
        temp = memory_stk;
        while (memory_stk)
        {
            if (memory_stk->address == M)
            {
                status = 2;
                break ;
            }
            memory_stk = memory_stk->next;
        }
        memory_stk = temp;
        if (status != 2)
        {
            ft_lstadd_back(&memory_stk, ft_lstnew(M));
        }
    }
}

void Character::unequip(int idx)
{
    /*
        Handle the Materias your character left on the floor as you like.
        Save the addresses before calling unequip(), or anything else, but
        don’t forget that you have to avoid memory leaks.
    */
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] && inv[idx] == inv[i])
        {
            ft_lstadd_back(&memory_stk, ft_lstnew(inv[idx]));
            inv[idx] = NULL;
            break ;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (inv[idx] && inv[idx]->getType() == "ice")
    {
        inv[idx]->use(target);
    }
    else if (inv[idx] && inv[idx]->getType() == "cure")
    {
        inv[idx]->use(target);
    }
}

