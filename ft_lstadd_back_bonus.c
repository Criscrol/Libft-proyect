/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:58:59 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:59:04 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast_bonus(*lst);
	aux->next = new;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_del(void *content)
{
    free(content);
}

// Función principal para probar
int main(void)
{
    t_list *list = NULL;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    // Crear nodos con contenido
    node1 = ft_lstnew_bonus(strdup("Nodo 1"));
    node2 = ft_lstnew_bonus(strdup("Nodo 2"));
    node3 = ft_lstnew_bonus(strdup("Nodo 3"));

    // Agregar nodos a la lista usando ft_lstadd_back_bonus
    ft_lstadd_back_bonus(&list, node1);
    ft_lstadd_back_bonus(&list, node2);
    ft_lstadd_back_bonus(&list, node3);

    // Mostrar el contenido de la lista para verificar
    t_list *temp = list;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Limpiar la lista usando ft_lstclear_bonus
    ft_lstclear_bonus(&list, ft_del);

    // Verificar que la lista esté vacía
    if (list == NULL)
        printf("Lista limpiada correctamente.\n");
    else
        printf("Error al limpiar la lista.\n");

    return 0;
}
*/
