/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:21:24 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:21:37 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if (!s1)
		return (NULL);
	s2 = malloc(strlen(s1) + 1);
	if (!s2)
		return (NULL);
	return (memcpy(s2, s1, strlen(s1) + 1));
}

/*
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1);

int main(void)
{
    const char *original = "Hola, mundo!";
    char *duplicate;

    // Duplicar la cadena
    duplicate = ft_strdup(original);
    if (duplicate)
    {
        printf("Cadena original: \"%s\"\n", original);
        printf("Cadena duplicada: \"%s\"\n", duplicate);
        free(duplicate); // Liberar la memoria asignada
    }
    else
    {
        printf("Error al asignar memoria.\n");
    }

    return 0;
}*/

/*La función strdup se utiliza para crear una copia dinámica de una cadena de caracteres. Toma como argumento un puntero a una cadena de origen y asigna memoria suficiente para almacenar una copia de esa cadena, incluyendo el carácter nulo terminador (\0). Luego, copia la cadena original en la nueva ubicación de memoria y devuelve un puntero a esta nueva cadena. Si la asignación de memoria falla, devuelve NULL. Es importante liberar la memoria asignada con free cuando ya no se necesite la copia*/
