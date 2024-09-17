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

#include <unistd.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	int	is_digit;
	int	is_lower;
	int	is_upper;

	is_digit = (c >= '0' && c <= '9');
	is_lower = (c >= 'a' && c <= 'z');
	is_upper = (c >= 'A' && c <= 'Z');
	return (is_digit || is_lower || is_upper);
}
