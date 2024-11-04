/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:27:44 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:27:48 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	get_size(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	size;

	num = n;
	size = get_size(n);
	if (n < 0)
		num *= -1;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	*(str + size--) = '\0';
	while (num > 0)
	{
		*(str + size--) = num % 10 + '0';
		num /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1])
		*(str + size) = '-';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Declaración de la función ft_itoa
char *ft_itoa(int n);

int main(void)
{
    // Casos de prueba
    int test1 = 0;
    int test2 = 12345;
    int test3 = -12345;
    int test4 = 2147483647;   // Valor máximo de un int
    int test5 = -2147483648;  // Valor mínimo de un int

    // Llamada a la función y muestra de resultados
    char *result1 = ft_itoa(test1);
    char *result2 = ft_itoa(test2);
    char *result3 = ft_itoa(test3);
    char *result4 = ft_itoa(test4);
    char *result5 = ft_itoa(test5);

    // Imprimir los resultados
    printf("ft_itoa(%d) = %s\n", test1, result1);
    printf("ft_itoa(%d) = %s\n", test2, result2);
    printf("ft_itoa(%d) = %s\n", test3, result3);
    printf("ft_itoa(%d) = %s\n", test4, result4);
    printf("ft_itoa(%d) = %s\n", test5, result5);

    // Liberar la memoria asignada
    free(result1);
    free(result2);
    free(result3);
    free(result4);
    free(result5);

    return 0;
}
*/
