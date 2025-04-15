/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:23:51 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/09 14:26:25 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{

    printf("128 is ASCII: %d\n", ft_isascii(128)); // Devrait afficher 0
    printf("255 is ASCII: %d\n", ft_isascii(255)); // Devrait afficher 0
    printf("-1 is ASCII: %d\n", ft_isascii(-1));   // Devrait afficher 0

    return (0);
}
*/
