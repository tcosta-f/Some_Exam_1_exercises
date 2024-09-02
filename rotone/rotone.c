/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                 (                               +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:40:09 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/16 16:40:09 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	char c;

	c = 0;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			if (*str == 'z')
				write(1, "a", 1);
			else if (*str == 'Z')
				write(1, "A", 1);
			else
			{
				c = *str + 1;
				write(1, &c, 1);
			}
		}
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return ;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_rotone(argv[1]);
	return (0);
}
