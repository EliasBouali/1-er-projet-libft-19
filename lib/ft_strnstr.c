/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:47:56 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/14 11:44:56 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (0);
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (little[j])
			{
				if ((i + j) >= len || big[i + j] != little[j])
					break ;
				j++;
			}
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
// on cast haystack en char * car cest ce que 
// return cette fonction voir la doc.
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char haystack[] = "Hello, World!";
    const char needle1[] = "World";
    const char needle2[] = "42";
    const char needle3[] = "";
    
    char *result;

    // Test 1 : Needle présente dans Haystack
    result = ft_strnstr(haystack, needle1, 13);
    if (result)
        printf("Trouvé : %s\n", result); // Devrait afficher : "World!"

    // Test 2 : Needle non présente
    result = ft_strnstr(haystack, needle2, 13);
    if (!result)
        printf("Non trouvé\n");

    // Test 3 : Needle est une chaîne vide
    result = ft_strnstr(haystack, needle3, 13);
    if (result)
        printf("Chaîne vide trouvée : %s\n", result); 
    // Devrait afficher : "Hello, World!"

    // Test 4 : Recherche avec une taille limitée
    result = ft_strnstr(haystack, needle1, 5);
    if (!result)
        printf("Non trouvé avec limite de taille.\n");

    return (0);
}*/
