/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:02:19 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:46:48 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, len_s1 + 1);
	ft_strlcat(join, s2, len_s1 + len_s2 + 1);
	return (join);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Test de ft_strlen()
    printf("Longueur de 'Hello' : %zu\n", ft_strlen("Hello")); // 5

    // Test de ft_strlcpy()
    char dst1[20];
    ft_strlcpy(dst1, "Hello, World!", 6);
    printf("ft_strlcpy : %s\n", dst1); // "Hello"

    // Test de ft_strlcat()
    char dst2[20] = "Hello";
    ft_strlcat(dst2, ", World!", 20);
    printf("ft_strlcat : %s\n", dst2); // "Hello, World!"

    // Test de ft_strjoin()
    char *joined = ft_strjoin("Hello", " World!");
    if (joined)
    {
        printf("ft_strjoin : %s\n", joined); // "Hello World!"
        free(joined);
    }

    return (0);
}
*/
