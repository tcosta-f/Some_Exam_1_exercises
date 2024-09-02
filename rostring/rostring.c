/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 03:18:24 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/16 04:02:41 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rostring(char *str)
{
	int i;
	char *word1;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (!str[i])
	{
		write(1, "\n", 1);
		return ;
	}
	else
		word1 = &str[i];
	while (str[i] && (!(str[i] == ' ' || str[i] == '\t')))
		i++;
	if (str[i])
	{
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			while (str[i] && (!(str[i] == ' ' || str[i] == '\t')))
			{
				write(1, &str[i], 1);
				i++;
			}
			if (str[i - 1] != ' ')
				write(1, " ", 1);
		}
	}
	while (*word1 != ' ' && *word1 != '\t' && *word1)
	{
		write(1, word1, 1);
		word1++;
	}		
	write(1, "\n", 1);
	return ;
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_rostring(argv[1]);
	return (0);
}
