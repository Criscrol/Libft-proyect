/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:24:10 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:24:17 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(const char *s1, const char *set);

int main(void)
{
    const char *str = "   Hola, mundo!   "; // Cadena con espacios
    const char *set = " "; // Conjunto de caracteres a eliminar (espacio)

    char *trimmed_str = ft_strtrim(str, set); // Llamar a ft_strtrim

    // Comprobar si la función devolvió NULL
    if (trimmed_str == NULL)
    {
        printf("Error al realizar el trim.\n");
        return 1; // Salir si hubo un error
    }

    // Imprimir la cadena original y la resultante
    printf("Cadena original: '%s'\n", str);
    printf("Cadena trimada: '%s'\n", trimmed_str);

    // Liberar la memoria asignada
    free(trimmed_str);

    return 0;
}
*/
/*
La función ft_strtrim elimina todos los caracteres del conjunto especificado 
(definido por la cadena set) se encuentran al inicio y al final de la cadena s1. 
Retorna una nueva cadena con los caracteres trimados, 
manteniendo intacto el contenido del medio de s1. 
Si la cadena resultante es vacía o si ocurre un error, puede devolver NULL
*/
