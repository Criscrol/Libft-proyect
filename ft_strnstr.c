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

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*needle)
		return ((char *)haystack);
	pos = 0;
	while (haystack[pos] && (size_t)pos < len)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] && haystack[pos + i] == needle[i]
				&& (size_t)(pos + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[pos]);
		}
		pos++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(void)
{
    const char *haystack = "Hola, Mundo!";
    const char *needle1 = "Mundo";
    const char *needle2 = "Hola";
    const char *needle3 = "Adiós";
    const char *needle4 = "";
    const char *needle5 = "Mund";

    char *result;

    result = ft_strnstr(haystack, needle1, 13);
    if (result)
        printf("Prueba 1: \"%s\" encontrado en \"%s\"\n", needle1, result);
    else
        printf("Prueba 1: \"%s\" no encontrado\n", needle1);

    result = ft_strnstr(haystack, needle2, 10);
    if (result)
        printf("Prueba 2: \"%s\" encontrado en \"%s\"\n", needle2, result);
    else
        printf("Prueba 2: \"%s\" no encontrado\n", needle2);

    result = ft_strnstr(haystack, needle3, 13);
    if (result)
        printf("Prueba 3: \"%s\" encontrado en \"%s\"\n", needle3, result);
    else
        printf("Prueba 3: \"%s\" no encontrado\n", needle3);

    result = ft_strnstr(haystack, needle4, 13);
    if (result)
        printf("Prueba 4: \"%s\" encontrado en \"%s\"\n", needle4, result);
    else
        printf("Prueba 4: \"%s\" no encontrado\n", needle4);

    result = ft_strnstr(haystack, needle5, 13);
    if (result)
        printf("Prueba 5: \"%s\" encontrado en \"%s\"\n", needle5, result);
    else
        printf("Prueba 5: \"%s\" no encontrado\n", needle5);

    return 0;
}
*/
/* ft_strnstr busca la subcadena (needle) dentro de la cadena (haystack)
hasta un máximo de len caracteres de haystack. Si needle se encuentra,
la función devuelve un puntero a la posición de haystack 
donde comienza la coincidencia. Si no se encuentra, devuelve NULL. */
