/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:45:10 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/29 14:38:30 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	if (!dst)
		return (0);
	l = ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (l + size);
	else
		l += ft_strlen(dst);
	while (dst[i])
		i++;
	while (src[j] && i + j + 1 < size)
	{	
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (l);
}
