/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:14:40 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 16:47:06 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nblen(long n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	nb;

	nb = (long)n;
	sign = (nb < 0);
	if (sign)
		nb = -nb;
	len = ft_nblen(nb) + sign;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *result;

    result = ft_itoa(42);
    printf("%s\n", result); // Devrait afficher : 42
    free(result);

    result = ft_itoa(-42);
    printf("%s\n", result); // Devrait afficher : -42
    free(result);

    result = ft_itoa(0);
    printf("%s\n", result); // Devrait afficher : 0
    free(result);

    result = ft_itoa(2147483648);
    printf("%s\n", result); // Devrait afficher : 2147483647
    free(result);

    result = ft_itoa(-2147483648);
    printf("%s\n", result); // Devrait afficher : -2147483648
    free(result);

    result = ft_itoa(-2147483648);
    printf("%s\n", result); // Devrait afficher : -2147483648
    free(result);
    return (0);
}*/
