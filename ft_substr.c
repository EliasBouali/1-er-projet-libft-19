/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouali <ebouali@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:17:32 by ebouali           #+#    #+#             */
/*   Updated: 2025/04/10 15:54:00 by ebouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_str_empty(void)
{
	char	*copy;

	copy = (char *)malloc(1);
	if (!copy)
		return (NULL);
	copy[0] = '\0';
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*copy;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_str_empty());
	if (len > s_len - start)
		len = s_len - start;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (i < len)
		copy[i++] = s[start++];
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char	*res;

	res = ft_substr("42 est incroyqble",3,10);
	printf("resultat : %s\n", res);
	// est incr	
	return (0);
}
*/
