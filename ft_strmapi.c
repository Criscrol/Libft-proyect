/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:28:58 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:29:00 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(const char *s, char (*f)(unsigned int, char));

char example_function(unsigned int index, char c)
{
    return c + index; // Simplemente suma el índice al carácter
}

int main(void)
{
    const char *str = "Hola";
    char *result;

    result = ft_strmapi(str, example_function);
    if (result)
    {
        printf("Resultado de ft_strmapi: \"%s\"\n", result);
        free(result); // Liberar la memoria asignada
    }
    else
    {
        printf("Error al asignar memoria.\n");
    }

    return 0;
}
*/
/* ft_strmapi aplica la función (f) a cada carácter de la cadena
de entrada (s) y devuelve una nueva cadena (fstr) que contiene los
caracteres transformados. */
