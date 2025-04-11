/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:11:14 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:47:45 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//return (src_len + dstsize);
// si dstsize est trop petit, retourne la longueur totale attendue. 
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	k;
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	k = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || dst_len >= dstsize)
		return (src_len + dstsize);
	while (src[k] && (dst_len + k) < dstsize - 1)
	{
		dst[dst_len + k] = src[k];
		k++;
	}
	dst[dst_len + k] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char dest[20] = "Hello";
    char src[] = ", World!";
    size_t result;

    // Test avec un dstsize suffisamment grand
    result = ft_strlcat(dest, src, 20);
    printf("Résultat : %s\n", dest); // Devrait afficher : "Hello, World!"
    printf("Longueur totale : %zu\n", result); // Devrait afficher : 13

    // Test avec un dstsize trop petit
    char dest2[10] = "Hello";
    result = ft_strlcat(dest2, src, 6);
    printf("Résultat : %s\n", dest2); // Devrait afficher : "Hello"
    printf("Longueur totale : %zu\n", result); // Devrait afficher : 13

    // Test avec un dstsize nul
    result = ft_strlcat(dest2, src, 0);
    printf("Longueur totale avec dstsize = 0 : %zu\n", result); 
 // Devrait afficher : 8

    return (0);
}
*/
