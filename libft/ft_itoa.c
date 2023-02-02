/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:19:52 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/26 18:41:42 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	si;

	si = 1;
	if (n > 9)
	{
		while (n > 9)
		{
			n = n / 10;
			si++;
		}
	}
	else if (n < 0)
	{
		while (n < -9)
		{
			n = n / 10;
			si++;
		}
		si++;
	}
	return (si);
}

char	*neg(int n)
{
	char	*j;
	int		i;

	i = len(n);
	j = malloc(i + 1);
	if (j == 0)
		return (NULL);
	j[0] = '-';
	j[i] = '\0';
	while (i > 1)
	{
		i--;
		j[i] = -(n % 10) + 48;
		n = n / 10;
	}
	return (j);
}

char	*pos(int n)
{
	char	*j;
	int		i;

	i = len(n);
	j = malloc(i + 1);
	if (j == 0)
		return (NULL);
	j[i] = '\0';
	while (i > 0)
	{
		i--;
		j[i] = n % 10 +48;
		n = n / 10;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	if (n < 0)
		return (neg(n));
	else
		return (pos(n));
	return (0);
}
