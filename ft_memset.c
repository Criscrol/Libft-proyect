/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:18:35 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:19:29 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (0 < len)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memset(void *s, int c, size_t n);

int main(void)
{
    char str[50] = "Hola, mundo! Este es un ejemplo."; // Cadena original

    printf("Antes de ft_memset: %s\n", str);
    
    // Usar ft_memset para llenar los primeros 5 caracteres con 'o'
    ft_memset(str, 'o', 5);

    printf("Después de ft_memset: %s\n", str); // Mostrar el resultado

    return 0;
}
*/
/* Replicates the behavior of the standard library function memset. 
This function sets the first 'len' bytes of the memory area pointed to by 'b' 
to the specified byte value 'c'. Returns the original pointer 'b' to the memory
block, after the bytes have been set. */
