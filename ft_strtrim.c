/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:03:30 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 16:54:28 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//while (s1[start] && ft_strchr(set,s1[start])) ca permet d'ignorer tous 
//les caracteres indesirables au debut de s1 grace a la fonction ft_strchr.
//while( end > start && ft_strchr(set, s1[end - 1]))
//ca permet d'ignorer tous les caracteres indesirable 
//en fin de s1 grace aussi a la fonction ft_strchr.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
	return (trimmed_str);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Prototypes de tes fonctions 
// (tu peux aussi inclure ton fichier .h s'il existe)
char  *ft_strtrim(char const *s1, char const *set);

int main(void)
{
    char *s1 = "  \t\nHello World ! \n\t ";
    char *set = " \n\t";
    char *result = ft_strtrim(s1, set);

    if (result)
    {
        printf("Original string: \"%s\"\n", s1);
        printf("Trimmed string : \"%s\"\n", result);
        free(result); // Toujours libérer après un malloc
    }
    else
    {
        printf("Erreur : malloc a échoué ou les arguments sont NULL\n");
    }

    // Autres tests
    printf("\nTest vide (tout est à trimmer) :\n");
    char *r2 = ft_strtrim(" \t \n ", " \t\n");
    printf("Résultat : \"%s\"\n", r2);
    free(r2);

    printf("\nTest sans rien à trimmer :\n");
    char *r3 = ft_strtrim("42 School", "");
    printf("Résultat : \"%s\"\n", r3);
    free(r3);

    printf("\nTest avec NULL :\n");
    char *r4 = ft_strtrim(NULL, " \n");
    printf("Résultat : %s\n", r4); // Devrait être NULL

    return 0;
}*/
