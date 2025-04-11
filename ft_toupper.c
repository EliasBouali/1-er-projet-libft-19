/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:51:00 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:54:57 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char lower = 'a';
    char upper = 'A';
    char digit = '9';
    char symbol = '!';

    printf("'%c' -> '%c'\n", lower, ft_toupper(lower)); 
	// Devrait afficher : 'a' -> 'A'
    printf("'%c' -> '%c'\n", upper, ft_toupper(upper)); 
	// Devrait afficher : 'A' -> 'A'
    printf("'%c' -> '%c'\n", digit, ft_toupper(digit)); 
	// Devrait afficher : '9' -> '9'
    printf("'%c' -> '%c'\n", symbol, ft_toupper(symbol)); 
	// Devrait afficher : '!' -> '!'

    return (0);
}
*/
