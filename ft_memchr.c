/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:44:20 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:44:34 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)s;
	while (n--)
	{
		if (*byte_ptr == (unsigned char)c)
			return (byte_ptr);
		byte_ptr++;
	}
	return (NULL);
}
