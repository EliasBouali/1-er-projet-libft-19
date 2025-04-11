/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:01:09 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:34:16 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//next sauvegard l'adresse du prochain element.
//del libere le contenu du maillon avec la fonction del.
//free  libere le maillon lui-meme.
//current passer au suivant.
//*lst = NULL;  mettre le pointeur initial  a NULL une fois que tout est libere.

void	ft_lstclear(t_list	**lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	current = *lst;
	if (!lst || !del)
		return ;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Fonction del qui libère une chaîne de caractères
void my_del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = NULL;
    t_list *node1 = ft_lstnew(malloc(6));
    t_list *node2 = ft_lstnew(malloc(6));
    t_list *node3 = ft_lstnew(malloc(6));

    // On vérifie si la mémoire a bien été allouée
    if (!node1 || !node2 || !node3 || !node1->content
    || !node2->content || !node3->content)
        return (1);

    // Initialisation des contenus
    char *str1 = (char *)node1->content;
    char *str2 = (char *)node2->content;
    char *str3 = (char *)node3->content;
    str1 = "Node1";
    str2 = "Node2";
    str3 = "Node3";

    // On ajoute les noeuds à la liste
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Avant suppression
    printf("Liste avant suppression :\n");
    t_list *tmp = list;
    while (tmp)
    {
        printf("Contenu : %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    // On nettoie toute la liste
    ft_lstclear(&list, my_del);

    // Après suppression
    if (list == NULL)
        printf("Liste après suppression : NULL (OK)\n");
    else
        printf("Liste après suppression : PAS NULL (ERREUR)\n");

    return (0);
}
*/
