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
	char	*ucd;
	char	*ucs;

	if (src == dst)
		return (dst);
	ucd = (char *)dst;
	ucs = (char *)src;
	if (ucs <= ucd)
	{
		while (0 < len)
		{
			len--;
			ucd[len] = ucs[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/* int	main(void)
{
	char	*test_dst;

	test_dst = malloc(20 * sizeof(char));
	ft_memset(test_dst, "QWERTYUIOP", 6);
	printf ("string copiado: %s\n", (char *)test_dst);
	free (test_dst);
	return (0);
} */

/* ft_memmove() realiza una copia segura de len bytes de datos de src a dst,
teniendo en cuenta la posible superposición de memoria entre las regiones
de origen y destino. Si se detecta superposición, la copia se realiza de atrás
hacia adelante para evitar problemas de superposición. Si no hay superposición
se llama a ft_memcpy() para realizar la copia normalmente. */