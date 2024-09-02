/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:00:55 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/12 20:27:41 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	n = 2;
	if (a == 0 || b == 0)
		return (0);
	while (n)
	{
		if (!(n % a) && !(n % b))
			return (n);
		n++;
	}
	return (0);
}

/*  int main()
{
	printf("%u\n", lcm(3, 8));
	return (0);
} */