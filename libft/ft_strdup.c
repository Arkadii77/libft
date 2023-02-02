/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:25:37 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/26 18:39:54 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*dest;

	if (!s1)
		return (NULL);
	l = ft_strlen(s1) + 1;
	dest = (char *)malloc(l);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, l);
	return (dest);
}
