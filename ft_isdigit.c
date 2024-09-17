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

#include <unistd.h>
#include "libft.h"

int	ft_isdigit(char *str)
{
	int	i;
	int	isdigit;

	i = 0;
	isdigit = 1;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			isdigit = 0;
		}
		i++;
	}
	return (isdigit);
}
