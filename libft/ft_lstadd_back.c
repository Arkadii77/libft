/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:13:49 by amaryan           #+#    #+#             */
/*   Updated: 2023/01/27 10:34:30 by amaryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*k;

	k = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	k = ft_lstlast(*lst);
	k->next = new;
}
