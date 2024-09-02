/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:39:49 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/16 22:54:45 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnb(int i)
{
	char c;

	c = 0;
	if (i >= 0 && i <= 9)
	{
		c = i + '0';
		write(1, &c, 1);
		return ;
	}
	ft_putnb(i / 10);
	c = i % 10 + '0';
	write(1, &c, 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "0\n", 2);
		return (1);
	}
	ft_putnb(argc - 1);
	write(1, "\n", 1);
	return (0);
}