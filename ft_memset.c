/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:52:28 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 16:05:44 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//size_t i;//size_t est non signé donc il ne pourra jamais contenir de 
//valeur negatives et la plage est plus grande qu'un int
//a[i] =(unsigned char)c; // c'est pour garantir que la valeur 
//passée en argument soit bien interprétée comme un octet, si
// il reste en int cela signifie qu il peut avoir une valeur sur plusieur
// octets, la valeur c peut
// donc etre plus grande que ce qu'un octet peut contenir ou etre negative.

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*a;
	size_t				i;

	if (!b)
		return (0);
	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str1[50] = "Hello World!";
    char str2[50] = "Hello World!";

    ft_memset(str1 + 6, '*', 5);
    memset(str2 + 6, '*', 5);

    printf("Test 1 - ft_memset : %s\n", str1); 
    // Devrait afficher : "Hello *****!"
    printf("Test 2 - memset    : %s\n", str2); 
    // Devrait afficher : "Hello *****!"

    return (0);
}
*/
