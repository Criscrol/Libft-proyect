/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:54:29 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/09 11:55:44 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	if (ft_isdigit('A'))
		printf ("El carácter SÍ es un dígito\n");
	else
		printf ("El carácter NO es un dígito\n");
	return (0);
}
*/
/* ft_isdigit comprueba si un carácter es o no es un dígito. */
