/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:26:40 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:26:48 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (dest);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dest);
}

/* 
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	ft_memmove(str + 7, str, 5);
	printf("Resultado: %s\n", str);
	return (0);
}
*/

/* ft_memmove() realiza una copia segura de len bytes de datos de src a dst,
teniendo en cuenta la posible superposición de memoria entre las regiones
de origen y destino. Si se detecta superposición, la copia se realiza de atrás
hacia adelante para evitar problemas de superposición. Si no hay superposición
se llama a ft_memcpy() para realizar la copia normalmente. */
