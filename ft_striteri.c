/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:29:48 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:29:51 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <ctype.h>

void	to_upper(unsigned int index, char *c)
{
	*c = toupper(*c);
}

int	main(void)
{
	char str[] = "hello, world!";
	ft_striteri(str, to_upper);
	printf("Resultado: %s\n", str); // Imprime: HELLO, WORLD!
	return (0);
}
*/
/*
La función ft_striteri aplica una función dada a cada carácter de una cadena, pasando el índice de cada carácter como argumento. Permite modificar directamente la cadena original, ya que se pasa un puntero al carácter. Esta función es útil para realizar transformaciones en cada carácter de la cadena de manera ordenada*/

