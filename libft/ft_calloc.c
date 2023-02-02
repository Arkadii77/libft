/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:44:40 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/29 16:58:45 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*alloc;
	size_t	dest;

	dest = count * size;
	if (count && size)
	{
		if ((dest < count) || (dest < size))
			return (NULL);
	}
	alloc = (void *)malloc(dest);
	if (!alloc)
		return (0);
	ft_bzero(alloc, dest);
	return (alloc);
}
