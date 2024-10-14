/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcleaar_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:58:00 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:58:02 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone_bonus(*lst, del);
		*lst = aux;
	}
	*lst = 0;
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

// Función principal para probar ft_lstclear_bonus
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

    // Mostrar el contenido de la lista antes de limpiar
    printf("Lista antes de limpiar:\n");
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
/* ft_lstclear elimina todos los nodos de una lista enlazada y libera su memoria
utilizando la función de eliminación proporcionada (del).
Recorre la lista, elimina y libera cada nodo, y finalmente establece *lst a NULL
para indicar que la lista está vacía. */
