/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:56:19 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:56:33 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_bonus(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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

// Función para imprimir el contenido de un nodo (usada en ft_lstiter_bonus)
void ft_print_content(void *content)
{
    printf("Contenido: %s\n", (char *)content);
}

// Función principal para probar ft_lstiter_bonus
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

    // Aplicar ft_lstiter_bonus para imprimir el contenido de cada nodo
    printf("Lista usando ft_lstiter_bonus:\n");
    ft_lstiter_bonus(list, ft_print_content);

    return 0;
}
*/
