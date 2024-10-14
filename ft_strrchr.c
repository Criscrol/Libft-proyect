/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:39:42 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:41:20 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			last = str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return ((char *)last);
}
/*
#include <stdio.h>

char	*ft_strrchr(const char *str, int c); // Prototipo de ft_strrchr

int	main(void)
{
	const char *str = "Hello, World! Hello!";
	char ch = 'o';
	char *result;

	result = ft_strrchr(str, ch);
	if (result)
		printf("Última aparición de '%c': '%s'\n", ch, result);
	else
		printf("Caracter '%c' no encontrado.\n", ch);

	ch = 'x';
	result = ft_strrchr(str, ch);
	if (result)
		printf("Última aparición de '%c': '%s'\n", ch, result);
	else
		printf("Caracter '%c' no encontrado.\n", ch);

	// Prueba con el carácter nulo
	ch = '\0';
	result = ft_strrchr(str, ch);
	if (result)
		printf("Encontrado el carácter nulo en la posición: %ld\n", result - str);
	else
		printf("Caracter '%c' no encontrado.\n", ch);

	return (0);
}
*/
/*La función ft_strrchr busca la última aparición de un carácter en una cadena de caracteres. Recibe como argumentos un puntero a la cadena y el carácter a buscar. Devuelve un puntero a la última posición del carácter encontrado o NULL si no se encuentra. Si el carácter buscado es el carácter nulo (\0), la función devuelve un puntero al final de la cadena.*/
