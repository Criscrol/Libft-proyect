/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:50:28 by csanchez          #+#    #+#             */
/*   Updated: 2024/06/22 18:51:46 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int	main(void)
{
	size_t	len;

	len = 0;
	len = ft_strlen("123456789");
	printf ("len = %zu\n", len);
	return (0);
} */

/* ft_strlen calcula la longitud de la cadena s al recorrer cada carácter
de la cadena hasta que se encuentra con un carácter nulo (\0), que marca
el final de la cadena. La longitud se cuenta usando la variable i y se
devuelve una vez que se completa el recorrido. */
