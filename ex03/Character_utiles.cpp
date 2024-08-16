/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character_utiles.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:26:57 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/10/02 12:04:35 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

stock	*ft_lstnew(AMateria	*content)
{
	stock	*newlist;

	newlist = new stock;
	if (!newlist)
		return (NULL);
	newlist->address = content;
	newlist->next = NULL;
	return (newlist);
}

stock	*ft_lstlast(stock *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_back(stock **lst, stock *new_lst)
{
	stock	*t;

	if (!lst || !new_lst)
		return ;
	if (*lst)
	{
		t = ft_lstlast(*lst);
		t->next = new_lst;
	}
	else
	{
		*lst = new_lst;
	}
}

