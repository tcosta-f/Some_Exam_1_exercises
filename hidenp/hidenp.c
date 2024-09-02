/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 02:41:35 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/16 03:15:25 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hidenp(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (str1[0] == '\0')
	{
		write(1, "1\n", 2);
		return ;
	}
	while (str2[j])
	{
		if (str1[i] == str2[j])
			i++;
		if (str1[i] == '\0')
		{
			write(1, "1\n", 2);
			return ;
		}
		j++;
	}
	write(1, "0\n", 2);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_hidenp(argv[1], argv[2]);
	return (0);
}
