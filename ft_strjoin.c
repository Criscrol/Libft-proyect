/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:23:04 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:23:12 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)ft_calloc(1, (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	while (*s1)
		s3[i++] = *s1++;
	while (*s2)
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Declaración de la función
char *ft_strjoin(const char *s1, const char *s2);

int main(void)
{
    char *result;

    // Prueba básica
    result = ft_strjoin("Hola, ", "mundo!");
    if (result)
    {
        printf("%s\n", result);  // Debería imprimir: Hola, mundo!
        free(result);            // Liberar la memoria asignada
    }

    return 0;
}
*/
/* ft_strjoin une las dos cadenas s1 y s2 en una nueva cadena, reservando
memoria para la cadena resultante. Copia s1 y s2 en s3, y agrega un
carácter nulo al final. Si alguna cadena de entrada es nula o si la
asignación de memoria falla, la función devuelve NULL. */
