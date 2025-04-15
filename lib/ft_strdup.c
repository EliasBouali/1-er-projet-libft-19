/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:37:50 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/14 12:27:53 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	int		len;
	char	*copy;

	if (!s)
		return (0);
	i = 0;
	len = ft_strlen(s);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *str = NULL;
    char *copy;

    // Test de ft_strdup()
    copy = ft_strdup(str);
    if (copy)
    {
        printf("Copie : %s\n", copy); 
	// Devrait afficher : "Hello, World!"
        free(copy);
    }
    else
        printf("Allocation échouée.\n");
    
   
    return (0);
}
*/
