/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:55:28 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:43:43 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//f(i, &s[i]);
// on appelle la fonction f placer en argument avec l'index et l'adresse
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void to_uppercase(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

int main(void)
{
    char str[] = "bonjour";

    ft_striteri(str, to_uppercase);
    printf("Résultat : %s\n", str); // Attendu : "BONJOUR"
    return (0);
}
*/
