/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:32:05 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 16:52:46 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	i = 0;
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];
    char dst2[5];
    size_t result;

    // Test 1 : Taille suffisante
    result = ft_strlcpy(dst, src, sizeof(dst));
    printf("Resultat : %s\n", dst); // Devrait afficher : Hello, World!
    printf("Taille source : %zu\n", result); // Devrait afficher : 13

    // Test 2 : Taille trop petite
    result = ft_strlcpy(dst2, src, sizeof(dst2));
    printf("Resultat tronqué : %s\n", dst2); // Devrait afficher : Hell
    printf("Taille source : %zu\n", result); // Devrait afficher : 13

    // Test 3 : Taille nulle
    result = ft_strlcpy(dst, src, 0);
    printf("Taille source (dstsize = 0) : %zu\n", result); 
// Devrait afficher : 13

    return (0);
}
*/
