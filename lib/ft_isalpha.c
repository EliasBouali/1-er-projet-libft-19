/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:19:03 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/09 14:23:32 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("'0' is alpha: %d\n", ft_isalpha('0')); // doit afficher 0
    printf("'@' is alpha: %d\n", ft_isalpha('@')); // doit  afficher 0
    printf("'A' is alpha: %d\n", ft_isalpha('A')); // doit  afficher 1
    printf("'z' is alpha: %d\n", ft_isalpha('z')); // doit  afficher 1

    return (0);
}
*/
