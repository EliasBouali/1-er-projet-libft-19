/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:23:02 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 16:02:36 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// comme dst et src sont de type void il faut caste avec unsigned char cela 
// correspond exactement a 1octet ce qui ne 
// pourmet de manipulé sans avoir d'errur

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	if (!dst || !src)
		return (0);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];
    char dst2[20];

    ft_memcpy(dst, src, 14);
    memcpy(dst2, src, 14);

    printf("Test 1 - ft_memcpy : %s\n", dst);     
    // Devrait afficher : Hello, World!
    printf("Test 2 - memcpy : %s\n", dst2);       
	// Devrait afficher : Hello, World!

    return (0);
}
*/
