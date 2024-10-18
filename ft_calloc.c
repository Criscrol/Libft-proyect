/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:20:57 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:20:59 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	s;
	void	*dst;

	s = num * size;
	dst = malloc(s);
	if (dst == NULL)
	{
		return (NULL);
	}
	else
		ft_memset(dst, 0, s);
	return (dst);
}
