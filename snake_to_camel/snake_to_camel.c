/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:20:27 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/12 18:39:34 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_snake_to_camel(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] == '_')
			i++;
		if (str[i - 1] == '_' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (-1);
	}
	ft_snake_to_camel(argv[1]);
	return (0);
}