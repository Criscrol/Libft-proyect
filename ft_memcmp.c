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
	unsigned char	*is1;
	unsigned char	*is2;

	is1 = (unsigned char *)s1;
	is2 = (unsigned char *)s2;
	while (0 < n)
	{
		if (*is1 != *is2)
			return (*is1 - *is2);
		is1++;
		is2++;
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
