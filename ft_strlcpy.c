/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:48:22 by csanchez          #+#    #+#             */
/*   Updated: 2024/06/19 13:47:23 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size);

int main(void)
{
    char dest[20];
    const char *src = "Hola, mundo!";
    size_t size = sizeof(dest); // Tamaño de la cadena de destino

    // Copiar la cadena
    size_t result = ft_strlcpy(dest, src, size);

    // Mostrar los resultados
    printf("Cadena copiada: \"%s\"\n", dest);
    printf("Tamaño original de src: %zu\n", result);

    // Copiar en un destino más pequeño
    char small_dest[10];
    size_t small_result = ft_strlcpy(small_dest, src, sizeof(small_dest));

    printf("Cadena copiada en pequeño destino: \"%s\"\n", small_dest);
    printf("Tamaño original de src: %zu\n", small_result);

    return 0;
}
*/

/* ft_strlcpy copies from scr to dst up to (dstsize - 1) characters, or to the
end of src, whichever happens first. Dst is finished with a null char (\0).
ft_strlcpy returns the length of src (a.k.a. slen) as an indicator of what
would have been copied if there were no restrictions. */
