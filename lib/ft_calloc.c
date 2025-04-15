/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:58:54 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/14 11:55:25 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// count * size car on alloue count (objets) de size octets chacun.
// on utilise pas de sizeof() car size en 
// argument dans calloc est deja la taille 'dun element 
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*copy;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((size != 0 && ((nmemb * size) / size != nmemb)) || (size >= 2147483647
			&& nmemb >= 2147483647))
		return (NULL);
	copy = malloc(nmemb * size);
	if (!copy)
		return (NULL);
	ft_memset(copy, 0, (nmemb * size));
	return (copy);
}
/*
#include <stdio.h>

int main(void)
{

    // Test de ft_calloc() classique
    int *arr = ft_calloc(5, sizeof(int));
    int i = 0;
    if (arr)
    {
        while (i < 5)
        {
            printf("%d ", arr[i]); // Attendu : "0 0 0 0 0"
            i++;
        }
        printf("\n");
        free(arr);
    }

    // Test de ft_calloc(0, 0)
    void *ptr = ft_calloc(0, 0);
    if (ptr)
        printf("ft_calloc(0, 0) returned a valid pointer.\n");
    else
        printf("ft_calloc(0, 0) returned NULL.\n");
    free(ptr);

    return (0);
}
*/
