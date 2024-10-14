/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:29:26 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/17 11:33:14 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *str = "Hello, World!";
	char ch = 'o';
	char *result;

	result = ft_strchr(str, ch);
	if (result)
		printf("Encontrado: '%c' en la posición: %ld\n", *result, result - str);
	else
		printf("Caracter '%c' no encontrado.\n", ch);

	ch = 'x';
	result = ft_strchr(str, ch);
	if (result)
		printf("Encontrado: '%c' en la posición: %ld\n", *result, result - str);
	else
		printf("Caracter '%c' no encontrado.\n", ch);

	// Prueba con el carácter nulo
	ch = '\0';
	result = ft_strchr(str, ch);
	if (result)
		printf("Encontrado el carácter nulo en la posición: %ld\n", result - str);
	else
		printf("Caracter '%c' no encontrado.\n", ch);

	return (0);
}
*/
/* ft_strchr busca un carácter c en la cadena s y devuelve un puntero
a su primera ocurrencia si se encuentra.
Si c no está en s, la función devuelve NULL. */
