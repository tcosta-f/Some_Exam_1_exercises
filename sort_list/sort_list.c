/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 20:30:05 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/17 23:47:53 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stddef.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *head;
    t_list *last;
    int swap;
    int temp;

    head = lst;
    last = NULL;
    swap = 1;
    if (lst == NULL)
        return (NULL);
    while (swap)
    {
        head = lst;
        swap = 0;
        while (head->next != last)
        {
            if (!cmp(head->data, head->next->data))
            {
                temp = head->data;
                head->data = head->next->data;
                head->next->data = temp;
                swap = 1;
            }
            head = head->next;
        }
        last = head;
    }
    return (lst);
}
