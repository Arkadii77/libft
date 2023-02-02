/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:49:39 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/27 12:08:21 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!haystack || len < 0)
		return (0);
	i = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len-- >= i)
	{
		if (*haystack == *needle && !(ft_memcmp(haystack, needle, i)))
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}
