/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:55:50 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:56:01 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast_bonus(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

// Función para obtener el último nodo de la lista
t_list *ft_lstlast_bonus(t_list *lst)
{
    if (!lst)
        return NULL;

    while (lst->next)
    {
        lst = lst->next;
    }
    return lst;
}

// Función principal para probar ft_lstlast_bonus
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

    // Obtener el último nodo usando ft_lstlast_bonus
    t_list *last_node = ft_lstlast_bonus(list);

    // Mostrar el contenido del último nodo
    if (last_node)
    {
        printf("Contenido del último nodo: %s\n", (char *)last_node->content);
    }
    else
    {
        printf("La lista está vacía.\n");
    }

    return 0;
}
*/
