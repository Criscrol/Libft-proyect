/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:20:23 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:20:59 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (dest);
	while (len--)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest1[20];
	char dest2[20];
	char src[] = "Hello, World!";
	
	// Copia de una cadena en un destino
	ft_memcpy(dest1, src, 13);
	dest1[13] = '\0'; // Asegurarse de que la cadena esté terminada en nulo
	printf("Resultado 1: %s\n", dest1);

	// Usando memcpy de la biblioteca estándar para comparación
	memcpy(dest2, src, 13);
	dest2[13] = '\0'; 
	printf("Resultado 2: %s\n", dest2);

	// Copiar 0 bytes
	ft_memcpy(dest1, src, 0);
	printf("Resultado 3 (sin cambios): %s\n", dest1);

	// Copiar en el mismo arreglo (ver solapamiento)
	ft_memcpy(src + 7, src, 5); // "Hello" a "World"
	printf("Resultado 4 (solapamiento): %s\n", src); 
	// Salida esperada: "HelloHello!"

	return (0);
}
*/
