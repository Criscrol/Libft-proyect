/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:33:33 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/09 12:33:38 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char upper = 'A';
	char lower = 'a';
	char non_alpha = '1';

	printf("'%c' en minúscula es '%c'\n", upper, ft_tolower(upper)); // Debe imprimir 'a'
	printf("'%c' en minúscula es '%c'\n", lower, ft_tolower(lower)); // Debe imprimir 'a'
	printf("'%c' en minúscula es '%c'\n", non_alpha, ft_tolower(non_alpha)); // Debe imprimir '1'

	// Probar con otros caracteres
	for (char c = 'A'; c <= 'Z'; c++) {
		printf("'%c' en minúscula es '%c'\n", c, ft_tolower(c));
	}

	return (0);
}
*/
/*
La función ft_tolower convierte un carácter en su versión en minúsculas si es una letra mayúscula (de 'A' a 'Z'). Si el carácter ya es minúscula o no es una letra, la función lo devuelve sin cambios. Esto permite normalizar caracteres al convertirlos todos a minúsculas*/
