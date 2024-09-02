/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:51:10 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/12 18:12:02 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		else if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
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
		return (-1);
	}
	ft_ulstr(argv[1]);
	return (0);
}
