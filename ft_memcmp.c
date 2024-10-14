/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:48:28 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:48:33 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (0 < n)
	{
		if (*us1 != *us2)
			return (*us1 - *us2);
		us1++;
		us2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	diferencia;

	diferencia = ft_memcmp("22345", "12345", 5);
	printf ("La diferencia es %d\n", diferencia);
	return (0);
}
*/
/* ft_memcmp compara dos bloques de memoria (s1 y s2)
durante un número específico de bytes (n). La comparación se hace */
