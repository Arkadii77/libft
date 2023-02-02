/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:22:12 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/20 11:17:16 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*k;
	unsigned char	*q;

	i = 0;
	if (!dst)
		return (NULL);
	k = (unsigned char *)dst;
	q = (unsigned char *)src;
	if (dst != src && n)
	{
		while (i < n)
		{
			k[i] = q[i];
			i++;
		}
	}
	return (dst);
}
