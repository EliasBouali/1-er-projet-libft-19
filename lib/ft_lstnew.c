/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:29:20 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/14 11:26:14 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// On initialise la variable 'content' de notre nouvel élément.
// Ici, on ne sait pas quel type de données est pointé par 'content',
// c'est pourquoi il est de type 'void *' (pointeur générique).
// Cela permet de stocker n'importe quel type de donnée
// On initialise la variable 'next' de notre nouvel élément à NULL.
// Cela indique que cet élément n'a pas encore de suivant dans la liste.
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	if (!content)
		return (NULL);
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    t_list *node;
    char *text = "Hello World!";

    node = ft_lstnew(text);
    if (node)
        printf("Content : %s\n", (char *)node->content);
    else
        printf("Erreur lors de l'allocation.\n");

    free(node);
    return (0);
}
*/
