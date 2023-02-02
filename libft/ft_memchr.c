/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:55:02 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/29 14:39:27 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*k;
	unsigned char	q;

	i = 0;
	if (!s)
		return (NULL);
	k = (unsigned char *)s;
	q = (unsigned char)c;
	while (i < n)
	{
		if (k[i++] == q)
			return (k + i - 1);
	}
	return (NULL);
}
