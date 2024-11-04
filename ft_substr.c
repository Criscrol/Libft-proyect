/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:20:14 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:20:16 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (start >= ft_strlen(s))
	{
		str = ft_calloc(1, sizeof(char));
		if (!str)
			return (NULL);
		return (str);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    char *original = "Hola, Mundo!";
    char *substring;

    substring = ft_substr(original, 7, 5);
    if (substring)
    {
        printf("Prueba 1: \"%s\"\n", substring);
        free(substring);
    }

    substring = ft_substr(original, 20, 5);
    if (substring)
    {
        printf("Prueba 2: \"%s\"\n", substring);
        free(substring);
    }

    substring = ft_substr(original, 5, 100);
    if (substring)
    {
        printf("Prueba 3: \"%s\"\n", substring);
        free(substring);
    }

    substring = ft_substr(original, 0, 4);
    if (substring)
    {
        printf("Prueba 4: \"%s\"\n", substring);
        free(substring);
    }

    return 0;
}
*/
/*
La función ft_substr crea una nueva subcadena a partir de una cadena dada, 
comenzando desde un índice específico y con una longitud determinada. 
Si el índice de inicio es mayor o igual a la longitud de la cadena original, 
la función devuelve una cadena vacía. 
Si la longitud especificada supera el número de caracteres 
disponibles a partir del índice de inicio, 
se ajusta automáticamente para no exceder el final de la cadena. 
La subcadena resultante se almacena en una nueva área de memoria 
que debe ser liberada por el usuario después de su uso, 
y la función asegura que siempre se incluya un carácter nulo 
al final de la subcadena para que sea una cadena válida en C.*/
