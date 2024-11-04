/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:25:35 by csanchez          #+#    #+#             */
/*   Updated: 2024/09/12 13:25:49 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**free_split(char **split, unsigned int k)
{
	unsigned int	i;

	i = 0;
	while (i < k && split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static size_t	word_len(const char *word, char c)
{
	size_t	len;

	len = 0;
	while (word[len] && word[len] != c)
		len++;
	return (len);
}

static unsigned int	count_words(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s++;
		}
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	index ;
	unsigned int	k;

	index = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (s[index] && s[index] == c)
		index++;
	while (s[index])
	{
		split[k] = ft_substr(s, index, word_len(s + index, c));
		if (!split[k])
			return (free_split(split, k));
		k++;
		index += word_len(s + index, c);
		while (s[index] && s[index] == c)
			index++;
	}
	split[k] = NULL;
	return (split);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    const char *str = "   Hello   World! This is a test string.  ";
    char delimiter = ' ';
    char **result = ft_split(str, delimiter);
    
    // Print the result
    if (result) {
        for (unsigned int i = 0; result[i] != NULL; i++) {
            printf("Word %d: '%s'\n", i, result[i]);
            free(result[i]); // Free each string
        }
        free(result); // Free the array of strings
    } else {
        printf("Failed to split the string.\n");
    }

    return 0;
}
*/
/*
La función ft_split en C se utiliza para dividir 
una cadena de texto en un array de subcadenas (o palabras) 
basándose en un delimitador específico. Primero, 
cuenta cuántas palabras hay en la cadena, 
luego asigna memoria para un array de punteros a cadenas. 
A continuación, recorre la cadena original, extrayendo cada palabra 
(usando una función auxiliar como ft_substr) 
y almacenándola en el array resultante. 
Finalmente, la función devuelve el array de subcadenas 
terminado con un puntero nulo, 
permitiendo al usuario acceder a cada palabra por separado. 
Si se encuentra algún error de memoria durante el proceso, 
se asegura de liberar la memoria previamente asignada
*/
