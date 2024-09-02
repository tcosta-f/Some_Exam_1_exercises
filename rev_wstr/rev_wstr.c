/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:32:21 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/14 03:55:35 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strchr(char *str, int len, char space)
{
	while (len > 1)
	{
		if (str[len] == space)
			return (len);
		len--;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_rev_wstr(char *str)
{
	int	len;
	int	space;
	int	boss;

	boss = 0;
	space = 0;
	len = ft_strlen(str) - 1;
	while (len >= 0 )
	{
		space = ft_strchr(str, len, ' ');
		boss = space + 1;
		if (boss == 1)
			boss = 0;
		while (boss <= len)
		{
			write(1, &str[boss], 1);
			boss++;
		}
		if(space > 0)
			write(1, " ", 1);
		len = space - 1;
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
	ft_rev_wstr(argv[1]);
	return (0);
}
