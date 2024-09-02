/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:39:58 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/16 20:49:23 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_search_and_replace(char *str, char c, char n)
{
	while (*str)
	{
		if (*str == c)
			write(1, &n, 1);
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 4 || argv[2][1] || argv[3][1])
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_search_and_replace(argv[1], argv[2][0], argv[3][0]);
	return (0);
}
