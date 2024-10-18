/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:55:30 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:55:32 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst)
	{
		elem = ft_lstnew_bonus(f(lst->content));
		if (!elem)
		{
			ft_lstclear_bonus(&new, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&new, elem);
		lst = lst->next;
	}
	return (new);
}
