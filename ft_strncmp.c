/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:56:49 by csanchez          #+#    #+#             */
/*   Updated: 2024/06/24 12:32:28 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

/* 
#include <stdio.h>

int	main(void)
{
	printf ("Diferencia: %d.\n", ft_strncmp ("123456789", "123456789", 9));
	return (0);
} */

/* ft_strncmp compara dos cadenas (s1 y s2) hasta un máximo de
n caracteres. Devuelve 0 si las cadenas son iguales en esos caracteres,
1 si s1 es mayor que s2, o -1 si s1 es menor que s2. */
