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

int	main(void)
{
	const char	*test_str;
	int	result;

	test_str = "	 	  -2147483648";
	result = ft_atoi(test_str);
	printf ("\n%d\n\n", result);
	return (0);
} 
*/
/* ft_atoi convierte una cadena (de char) que representa un número entero
(opcionalmente con un signo + ó - y espacios iniciales) en su
valor entero (int) equivalente, manejando adecuadamente los signos y
espacios en blanco. */
