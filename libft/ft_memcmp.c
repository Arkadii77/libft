/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:38:54 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/20 16:20:13 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*k;
	unsigned char	*q;

	i = 0;
	if (!s1 || !s2)
		return (0);
	k = (unsigned char *)s1;
	q = (unsigned char *)s2;
	while (i < n)
	{
		if (k[i] == q[i])
			i++;
		else
			return (k[i] - q[i]);
	}
	return (0);
}
