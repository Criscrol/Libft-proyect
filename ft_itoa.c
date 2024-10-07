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

static size_t	num_len(int n)
{
	size_t	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		sign;

	len = num_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	sign = (n < 0);
	if (n == 0)
		str[0] = '0';
	if (sign && n == INT_MIN)
	{
		str[--len] = '8';
		n /= 10;
	}
	if (sign)
		n = -n;
	while (n > 0)
		str[--len] = (n % 10) + '0';
	n /= 10;
	if (sign)
		str[--len] = '-';
	return (str);
}
