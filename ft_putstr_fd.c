/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:31:41 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:31:45 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return ;
	write (fd, s, ft_strlen(s));
}

/* ft_putstr_fd escribe la cadena de caracteres s al archivo o dispositivo
identificado por el descriptor de archivo fd. Verifica si el descriptor de
archivo es válido y, si lo es, utiliza write para escribir la cadena. */
