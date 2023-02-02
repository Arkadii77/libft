/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:31:51 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/29 14:10:22 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*k;

	if (*lst == NULL)
		return ;
	if (lst)
	{
		while (*lst)
		{
			k = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = k;
		}
	}
}
