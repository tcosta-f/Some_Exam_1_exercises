/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:01:59 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/16 17:12:57 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_camel_to_snake(char *str)
{
	int	i;
	char c;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] + 32;
			write(1, "_", 1);
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_camel_to_snake(argv[1]);
	return (0);
}