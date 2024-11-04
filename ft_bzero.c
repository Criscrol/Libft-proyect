/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:16:15 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/10 10:16:22 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*test_str;

	test_str = (char *)malloc(26 * sizeof(char));
	ft_strlcpy(test_str, "Abraxas", 12);
	printf ("test_str inicial: %s\n", test_str);
	ft_bzero(test_str, 10);
	printf ("test_str final: %s\n", test_str);
	free(test_str);
	return (0);
}
*/
