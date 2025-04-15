/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:28:17 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 13:44:21 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("'A' is digit: %d\n", ft_isdigit('A')); // Devrait afficher 0
    printf("'0' is digit: %d\n", ft_isdigit('0')); // Devrait afficher 1
    printf("'9' is digit: %d\n", ft_isdigit('9')); // Devrait afficher 1
    printf("'!' is digit: %d\n", ft_isdigit('!')); // Devrait afficher 0

    return (0);
}
*/
