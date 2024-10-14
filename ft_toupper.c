/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:31:00 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/09 12:31:07 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    char lower = 'a';
    char upper = 'A';
    char non_alpha = '1';

    printf("'%c' en mayúscula es '%c'\n", lower, ft_toupper(lower)); // Debe imprimir 'A'
    printf("'%c' en mayúscula es '%c'\n", upper, ft_toupper(upper)); // Debe imprimir 'A'
    printf("'%c' en mayúscula es '%c'\n", non_alpha, ft_toupper(non_alpha)); // Debe imprimir '1'

    // Probar con otros caracteres
    for (char c = 'a'; c <= 'z'; c++) {
        printf("'%c' en mayúscula es '%c'\n", c, ft_toupper(c));
    }

    return 0;
}
*/
/*
La función ft_toupper convierte un carácter a su versión en mayúsculas si es una letra minúscula (de 'a' a 'z'). Si el carácter ya es mayúscula o no es una letra, lo devuelve sin cambios. Esto permite estandarizar caracteres convirtiéndolos todos a mayúsculas.*/
