/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:34:14 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/09 17:37:23 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    t_list *list;
    t_list *node1;
    t_list *node2;

    node1 = ft_lstnew("Hello");
    node2 = ft_lstnew("World");

    list = node1;
    node1->next = node2;

    printf("Taille de la liste : %d\n", ft_lstsize(list));  
	// Devrait afficher : 2

    free(node1);
    free(node2);

    return (0);
}
*/
