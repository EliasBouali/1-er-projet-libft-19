/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:30:33 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/09 16:32:11 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    t_list *list;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    node1 = ft_lstnew("Premier");
    node2 = ft_lstnew("Deuxième");
    node3 = ft_lstnew("Dernier");

    node1->next = node2;
    node2->next = node3;

    list = ft_lstlast(node1);

    if (list)
        printf("Dernier élément : %s\n", 
	(char *)list->content);  // Doit afficher : "Dernier"

    free(node1);
    free(node2);
    free(node3);

    return (0);
}*/
