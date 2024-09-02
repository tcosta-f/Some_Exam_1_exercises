/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:59:26 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/18 15:35:51 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

int ft_strchr(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_inter(char *str1, char *str2)
{
	char	new[10000];
	int		i;
	int		j;
	int		n;
	
	i = 0;
	j = 0;
	n = 0;
	while (str1[i])
	{
		while (str2[j])
		{
			if (str1[i] == str2[j] && !(ft_strchr(new, str1[i])))
			{
				new[n] = str1[i];
				n++;
				break ;
			}
			j++;
		}
		i++;
		j = 0;
	}
	new[n] = '\0';
	ft_putstr(new);
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_inter(argv[1], argv[2]);
	return (0);
}