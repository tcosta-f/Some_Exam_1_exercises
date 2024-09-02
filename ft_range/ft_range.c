/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:32:55 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/15 22:09:38 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int len;
	int i;

	i = 0;
	len = end - start;
	if (len < 0)
		len = -len;
	arr = malloc((len + 1) * sizeof(int));
	if (!arr)
		return (NULL);
	if (end >= start)
	{
		while (start <= end)
		{
			arr[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			arr[i] = start;
			i++;
			start--;
		}
	}
	return (arr);
}

/* int	main(void)
{
	int *arr;
	int	size;
	int start;
	int	end;
	int i;

	start = 1;
	end = 3;
	size = end - start;
	if (size < 0)
		size = -size;
	size++;
	arr = ft_range(start, end);
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		printf("%i ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
 */