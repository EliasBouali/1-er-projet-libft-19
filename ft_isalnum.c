/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:10:23 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/09 14:18:06 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
 
    printf("'!' is alnum: %d\n", ft_isalnum('!')); // Devrait afficher 0
    printf("'0' is alnum: %d\n", ft_isalnum('0')); // Devrait afficher 1
    printf("'A' is alnum: %d\n", ft_isalnum('A')); // Devrait afficher 1
    printf("'a' is alnum: %d\n", ft_isalnum('a')); // Devrait afficher 1

    return (0);
}
*/
