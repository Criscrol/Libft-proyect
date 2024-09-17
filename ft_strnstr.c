/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:51:16 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:51:24 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len--)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] && i <= len)
			i++;
		if (!needle[i])
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
