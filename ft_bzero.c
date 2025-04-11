/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:23:41 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 18:25:55 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
// on le cast en unsigned char * pour avoir accés aux octets
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			i;

	if (!s)
		return ;
	i = 0;
	a = (unsigned char *) s;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
