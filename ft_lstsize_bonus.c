/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:55:00 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:55:14 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize_bonus(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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

// Función para añadir un nodo al final de la lista
void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
    t_list	*aux;

    if (!lst || !new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
    }
    else
    {
        aux = *lst;
        while (aux->next)
            aux = aux->next;
        aux->next = new;
    }
}

// Función para contar el número de nodos en la lista
int ft_lstsize_bonus(t_list *lst)
{
    int count = 0;

    while (lst)
    {
        count++;
        lst = lst->next;
    }
    return count;
}

// Función principal para probar ft_lstsize_bonus
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

    // Contar el número de nodos en la lista usando ft_lstsize_bonus
    int size = ft_lstsize_bonus(list);

    // Mostrar el tamaño de la lista
    printf("Tamaño de la lista: %d\n", size);

    // Limpiar la memoria de la lista
    t_list *temp;
    while (list)
    {
        temp = list;
        list = list->next;
        free(temp->content); // Liberar el contenido
        free(temp); // Liberar el nodo
    }

    return 0;
}
*/
