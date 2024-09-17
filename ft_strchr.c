/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:29:26 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/17 11:33:14 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if	(*str == (char)c)
			{
			return	((char *)str);
			}
		str++;
		}
		if	(c == '\0')
		{
		return	((char *)str);
		}
	return	(NULL);
}
