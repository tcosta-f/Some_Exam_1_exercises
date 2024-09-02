/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:31:22 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/14 01:06:03 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <='z')
		{
			if (*str + 13 > 'z')
				*str = *str - 13;
			else 
				*str = *str + 13;
		}
		else if (*str >= 'A' && *str <='Z')
		{
			if (*str + 13 > 'Z')
				*str = *str - 13;
			else 
				*str = *str + 13;
		}
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	rot_13(argv[1]);
	return (0);
}
