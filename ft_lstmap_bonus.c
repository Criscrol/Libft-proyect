/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:55:30 by csanchez          #+#    #+#             */
/*   Updated: 2024/10/08 17:55:32 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst)
	{
		elem = ft_lstnew_bonus(f(lst->content));
		if (!elem)
		{
			ft_lstclear_bonus(&new, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&new, elem);
		lst = lst->next;
	}
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

// Función de transformación que se aplicará a cada nodo
void *ft_transform(void *content)
{
    char *new_content = malloc(strlen((char *)content) + 10); //" transformado"
    if (new_content)
        sprintf(new_content, "%s transformado", (char *)content);
    return new_content;
}

// Función para liberar el contenido de un nodo
void ft_del(void *content)
{
    free(content);
}

// Función para mapear una lista y crear una nueva lista
t_list *ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node;
    
    while (lst)
    {
        new_node = ft_lstnew_bonus(f(lst->content));
        if (!new_node)
        {
            while (new_list) // limpiar la nueva lista en caso de fallo
            {
                t_list *temp = new_list;
                new_list = new_list->next;
                del(temp->content);
                free(temp);
            }
            return NULL;
        }
        ft_lstadd_back_bonus(&new_list, new_node);
        lst = lst->next;
    }
    return new_list;
}

// Función principal para probar ft_lstmap_bonus
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

    // Usar ft_lstmap para crear una nueva lista transformando los contenidos
    t_list *new_list = ft_lstmap_bonus(list, ft_transform, ft_del);

    // Mostrar el contenido de la nueva lista
    printf("Contenido de la nueva lista:\n");
    t_list *temp = new_list;
    while (temp)
    {
        printf("Contenido: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Limpiar las listas originales y nuevas
    ft_lstclear_bonus(&list, ft_del);
    ft_lstclear_bonus(&new_list, ft_del);

    return 0;
}
*/
/* ft_lstmap crea una nueva lista a partir de una lista original,
aplicando una función (f) a cada nodo para obtener el contenido de
los nuevos nodos. Si ocurre un error durante el proceso, libera cualquier
memoria asignada y retorna NULL. Si todo funciona correctamente,
retorna la nueva lista. */
