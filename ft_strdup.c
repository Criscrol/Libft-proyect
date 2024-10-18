/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:21:24 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:21:37 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (!s1)
		return (NULL);
	s2 = malloc(strlen(s1) + 1);
	if (!s2)
		return (NULL);
	return (memcpy(s2, s1, strlen(s1) + 1));
}
