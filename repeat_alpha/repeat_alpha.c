/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:49:49 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/13 19:26:56 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_index(char str)
{
	char *abc = "abcdefghijklmnopqrstuvwxyz";
	char *abc_big = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j;

	j = 0;
	while (abc[j])
	{
		if (str == abc[j] || str == abc_big[j])
			return (j + 1);
		j++;
	}
	return (1);
}

void	repeat_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		i = find_index(*str);
		while (i)
		{
			write(1, str, 1);
			i--;			
		}
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
		return (-1);
	}
	repeat_alpha(argv[1]);
	return (0);
}
	