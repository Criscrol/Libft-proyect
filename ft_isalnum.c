/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:04:29 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:05:50 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	if (ft_isalnum('$'))
		printf("El carácter SÍ es alfanumérico\n");
	else
		printf("El carácter NO es alfanumérico\n");
	return (0);
}
*/
/* ft_isalnum verifica si un carácter es alfanumérico. */
