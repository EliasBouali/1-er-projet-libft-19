/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:34:18 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:40:53 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char str[] = "Hello, World!";
    char *result;

    // Test 1 : Caractère présent dans la chaîne
    result = ft_strchr(str, 'W');
    if (result)
        printf("Trouvé : %s\n", result); // Devrait afficher : World!

    // Test 2 : Caractère absent de la chaîne
    result = ft_strchr(str, 'z');
    if (!result)
        printf("Le caractère 'z' n'a pas été trouvé.\n");

    // Test 3 : Recherche de '\0'
    result = ft_strchr(str, '\0');
    if (result)
        printf("Trouvé '\\0' à la fin de la chaîne.\n");

    return (0);
}
*/
