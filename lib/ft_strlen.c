/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:37:45 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/14 11:38:20 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *str1 = "Hello, World!";
    const char *str2 = "";
    const char *str3 = "42";

    printf("Longueur de '%s' : %zu\n", str1, ft_strlen(str1)); 
    // Devrait afficher 13
    printf("Longueur de '%s' : %zu\n", str2, ft_strlen(str2)); 
    // Devrait afficher 0
    printf("Longueur de '%s' : %zu\n", str3, ft_strlen(str3)); 
    // Devrait afficher 2

    return (0);
}
*/
