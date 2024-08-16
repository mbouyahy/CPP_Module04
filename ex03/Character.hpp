/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:36:43 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:05:32 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

struct stock
{
    AMateria *address;
    struct stock *next;
};

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria 	*inv[4];
        stock		*memory_stk;

    public:
        Character(void);
        ~Character(void);
        Character(const Character &other);
        Character &operator=(const Character &other);

        Character(std::string value);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

void	ft_lstadd_back(stock **lst, stock *new_lst);
stock	*ft_lstnew(AMateria *content);
stock	*ft_lstlast(stock *lst);

#endif