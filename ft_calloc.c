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
	size_t	s;
	void	*dst;

	s = num * size;
	dst = malloc(s);
	if (dst == NULL)
	{
		return (NULL);
	}
	else
		ft_memset(dst, 0, s);
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
    size_t count = 12;
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
}*/
