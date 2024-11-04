/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:42:08 by csanchez          #+#    #+#             */
/*   Updated: 2024/06/24 10:32:15 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	j = dst_length;
	i = 0;
	if (dst_length < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dst_length + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dst_length >= dstsize)
		dst_length = dstsize;
	return (dst_length + src_length);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int main(void)
{
    char dst[20] = "Hola";      // Cadena destino con espacio sufi
    const char *src = " Mundo"; // Cadena fuente

    // Usar ft_strlcat para concatenar
    size_t result = ft_strlcat(dst, src, sizeof(dst));

    // Imprimir los resultados
    printf("Cadena resultante: %s\n", dst);
    printf("Longitud total que se intentó crear: %zu\n", result);

    return 0;
}
*/
/*
La ft strlcat se utiliza para concatenar 2 cadenas de char de manera segura. 
Toma como arg el destino de la concatenación, la fuente que se va a añadir 
y el tamaño total del buffer de destino. 
Asegura que no se exceda el tamaño del buffer al copiar la cadena fuente, 
añadiendo un carácter nulo al final de la cadena resultante. 
Retorna la longitud total de la cadena que se intentó crear, es decir, 
la longitud de la cadena de dest original más la long de la cadena fuente. 
Si el tamaño del buffer es menor o igual a la longitud de la cadena de destino, 
no se realizan modificaciones 
y la cadena de destino se garantiza que estará correctamente terminada 
con un carácter nulo.*/
