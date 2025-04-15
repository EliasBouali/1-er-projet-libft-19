/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:38:35 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/14 12:25:56 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	if (!s)
		return (0);
	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		if (tab[i] == (unsigned char)c)
			return ((void *)&tab[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "Hello, world!";
    char *result;

    result = ft_memchr(str, 'w', 13);
    if (result)
        printf("Trouvé : '%c' à la position %ld\n", *result, result - str); 
    // Devrait afficher : 'w' à la position 7

    result = ft_memchr(str, 'z', 13);
    if (!result)
        printf("Le caractère 'z' n'a pas été trouvé.\n"); 
    // Devrait afficher : Le caractère 'z' n'a pas été trouvé.

    result = ft_memchr(str, 'o', 5);
    if (result)
        printf("Trouvé : '%c' à la position %ld\n", *result, result - str); 
     // Devrait afficher : 'o' à la position 4

    return (0);
}
*/
