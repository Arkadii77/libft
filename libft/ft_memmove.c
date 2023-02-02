/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:23:01 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/27 15:13:41 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*k;
	unsigned char	*q;

	i = -1;
	if (!dst || !src)
		return (NULL);
	k = (unsigned char *)dst;
	q = (unsigned char *)src;
	if (k && q && k > q)
	{
		while (len != 0)
		{
			len--;
			k[len] = q[len];
		}
	}
	else if (k && q)
	{
		while (++i < len)
			k[i] = q[i];
	}
	else
		return (NULL);
	return (k);
}
