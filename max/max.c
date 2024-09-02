/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 02:15:54 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/16 02:39:20 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int max;

	if (len == 0)
		return (0);
	max = tab[len - 1];
	while (len > 1)
	{
		if (tab[len - 1] > max)
			max = tab[len - 1];
		len--;
	}
	return (max);
}

/*  int main (void)
{
	int arr[9] = {1, 2, -1, 11, 2, 6, 7, 9, 10};
	int n;

	n = 0;
	n = max(arr, 9);
	printf("%i", n);
	return (0);
}  */