/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:20:57 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:20:59 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}
/*
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size);

int main(void)
{
    size_t count = 3;
    size_t size = sizeof(int);
    int *arr;

    arr = (int *)ft_calloc(count, size);
    if (!arr)
    {
        printf("Error al asignar memoria.\n");
        return (1);
    }

    for (size_t i = 0; i < count; i++)
    {
        printf("arr[%zu]: %d\n", i, arr[i]);
    }

    free(arr); // Liberar la memoria asignada
    return (0);
}
*/
/*
calloc es una función de la biblioteca estándar de C 
que se utiliza para asignar memoria dinámicamente. 
A diferencia de malloc, que asigna un bloque de memoria de un tamaño específico, 
calloc se utiliza para asignar memoria 
para un número específico de elementos de un tamaño determinado y, además, 
inicializa toda la memoria asignada a cero.*/
