/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:30:49 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:30:53 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putchar_fd('H', 1); // 1 es el descriptor de archivo para stdout
	ft_putchar_fd('e', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd(',', 1);
	ft_putchar_fd(' ', 1);
	ft_putchar_fd('W', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('r', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('d', 1);
	ft_putchar_fd('!', 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/

/* ft_putchar_fd escribe el carácter c a un archivo o dispositivo identificado
por el descriptor de archivo fd utilizando la llamada al sistema write().
Si fd es válido, el carácter se escribe correctamente; de lo contrario
la función no realiza ninguna acción. */
