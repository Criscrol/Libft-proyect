/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:17:56 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/09 12:18:59 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	if (ft_isprint('5'))
		printf ("El carácter SÍ es imprimible\n");
	else
		printf ("El carácter NO es imprimible\n");
	return (0);
}
*/
/* ft_isprint evalúa si un carácter es imprimible. */
