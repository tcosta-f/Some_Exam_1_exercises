/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:57:19 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/17 20:07:40 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	t_list *new;
	int i;

	i = 0;
	new = begin_list;
	while (new)
	{
		i++;
		new = new->next;
	}
	return (i);
}
