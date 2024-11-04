/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:33:06 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:33:11 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putendl_fd("Hello, World!", 1); // 1 es el descriptor stdout
	ft_putendl_fd("Welcome to 42!", 1);
	return (0);
}
*/

/* ft_putendl_fd escribe el carácter c a un archivo o dispositivo identificado
por el descriptor de archivo fd utilizando la llamada al sistema write() y luego
añade un salto de línea. Si fd es válido, el carácter se escribe correctamente;
de lo contrario la función no realiza ninguna acción. */
