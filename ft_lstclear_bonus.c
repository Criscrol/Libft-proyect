/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcleaar_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:58:00 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:58:02 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone_bonus(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}
