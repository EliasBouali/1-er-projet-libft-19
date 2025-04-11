/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:18:15 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/09 17:28:47 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//new_content = f(lst->content);// appliquer la fonction 
//f() sur le nouveau contenu.
//new_node = ft_lstnew(new_content);
//// creation du nouveau noeud avec le contenu.
//if(!new_node)//si l'allocation echoue, liberation de toute la nouvelle liste.
//ft_lstadd_back(&new_list, new_node);// on ajoute le nouveau noeud 
//a la fin de la nouvelle liste 
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Fonction qui sera appliquée à chaque élément de la liste
void *duplicate_content(void *content)
{
    return (strdup((char *)content));
}

// Fonction de suppression
void delete_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = ft_lstnew(strdup("Hello"));
    ft_lstadd_back(&list, ft_lstnew(strdup("World")));
    ft_lstadd_back(&list, ft_lstnew(strdup("42")));

    t_list *new_list = ft_lstmap(list, duplicate_content, delete_content);

    // Affichage de la nouvelle liste
    for (t_list *temp = new_list; temp; temp = temp->next)
        printf("%s\n", (char *)temp->content);

    ft_lstclear(&list, delete_content);
    ft_lstclear(&new_list, delete_content);

    return (0);
}
*/
