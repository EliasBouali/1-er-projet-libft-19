/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:37:50 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/11 20:50:32 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	int		len;
	char	*copy;

	if (!s1)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *str = "Hello, World!";
    char *copy;
    char *copy_2;

    // Test de ft_strdup()
    copy = ft_strdup(str);
    copy_2 = strdup(str);
    if (copy)
    {
        printf("Copie : %s\n", copy); 
	// Devrait afficher : "Hello, World!"
        free(copy);
    }
    else
        printf("Allocation échouée.\n");
    
    if (copy_2)
    {
	    printf("Copie : %s\n", copy_2);
	    // Devrait afficher : "Hello, World!"
	    free(copy_2);
    }
    else
	    printf("Allocation échouée.\n");
    return (0);
}
*/
