/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:01:32 by csanchez          #+#    #+#             */
/*   Updated: 2024/06/22 19:06:17 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	neg;

	num = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * neg);
}
/*
#include <stdio.h>

int main(void)
{
    // Pruebas de diferentes casos
    const char *test1 = "123";
    const char *test2 = "--456";
    const char *test3 = "   789";
    const char *test4 = "   -321";
    const char *test5 = "+42";
    const char *test6 = "42abc45";
    const char *test7 = "abc42";
    const char *test8 = "2147483647";  // Valor máximo de un int
    const char *test9 = "-2147483648"; // Valor mínimo de un int

    // Imprimir los resultados de las pruebas
    printf("ft_atoi(\"%s\") = %d\n", test1, ft_atoi(test1));
    printf("ft_atoi(\"%s\") = %d\n", test2, ft_atoi(test2));
    printf("ft_atoi(\"%s\") = %d\n", test3, ft_atoi(test3));
    printf("ft_atoi(\"%s\") = %d\n", test4, ft_atoi(test4));
    printf("ft_atoi(\"%s\") = %d\n", test5, ft_atoi(test5));
    printf("ft_atoi(\"%s\") = %d\n", test6, ft_atoi(test6));
    printf("ft_atoi(\"%s\") = %d\n", test7, ft_atoi(test7));
    printf("ft_atoi(\"%s\") = %d\n", test8, ft_atoi(test8));
    printf("ft_atoi(\"%s\") = %d\n", test9, ft_atoi(test9));

    return 0;
}
*/
