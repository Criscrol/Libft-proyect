/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:54:38 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:54:43 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_bonus(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para crear un nuevo nodo
t_list *ft_lstnew_bonus(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

// Función principal para probar ft_lstnew_bonus
int main(void)
{
    // Crear un nuevo nodo con contenido
    t_list *new_node = ft_lstnew_bonus(strdup("Contenido del Nodo"));

    // Verificar que el nodo se ha creado correctamente
    if (new_node)
    {
        printf("Nodo creado correctamente:\n");
        printf("Contenido: %s\n", (char *)new_node->content);
        
        // Limpiar la memoria del contenido
        free(new_node->content);
        // Limpiar la memoria del nodo
        free(new_node);
    }
    else
    {
        printf("Error al crear el nodo.\n");
    }

    return 0;
}
*/
