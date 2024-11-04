/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:57:06 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:57:26 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone_bonus(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
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

// Función para liberar el contenido de un nodo
void ft_del(void *content)
{
    free(content);
}

// Función principal para probar ft_lstdelone_bonus
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

    // Mostrar el contenido de la lista antes de eliminar un nodo
    printf("Lista antes de eliminar un nodo:\n");
    t_list *temp = list;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Eliminar el segundo nodo (node2) usando ft_lstdelone_bonus
    ft_lstdelone_bonus(node2, ft_del);

    // Mostrar el contenido de la lista después de eliminar el nodo
    printf("\nLista después de eliminar el nodo 2:\n");
    temp = list;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    return 0;
}
*/
