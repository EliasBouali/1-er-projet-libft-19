/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:04:08 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:39:16 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
/*
int main(void)
{
    ft_putnbr_fd(1234, 1); write(1, "\n", 1);           // Test : Nombre positif
    ft_putnbr_fd(-5678, 1); write(1, "\n", 1);          // Test : Nombre négatif
    ft_putnbr_fd(0, 1); write(1, "\n", 1);              // Test : Zéro
    ft_putnbr_fd(2147483647, 1); write(1, "\n", 1);     // Test : INT_MAX
    ft_putnbr_fd(-2147483648, 1); write(1, "\n", 1);    // Test : INT_MIN
    ft_putnbr_fd(-5, 1); write(1, "\n", 1);             
// Test : Nombre négatif simple
    ft_putnbr_fd(5, 1); write(1, "\n", 1);              
// Test : Nombre positif simple

    return (0);
}
*/
