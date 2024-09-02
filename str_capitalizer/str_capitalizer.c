/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 01:44:04 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/14 02:16:45 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_tolower(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return ;
}

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	ft_tolower(str);
	while (str[i])
	{
		if (i == 0  && str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 32;
		else if (str[i - 1] == ' ' && str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int main(int argc, char **argv)
{
	int	n; 

	n = 2;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (n <= argc)
	{
		str_capitalizer(argv[n - 1]);
		n++;
	}
	return (0);
}
