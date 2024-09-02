/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 01:07:48 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/14 01:21:26 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	str = NULL;
	if (src == NULL)
		return (NULL);
	str = malloc(ft_strlen(src) + 1);
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main()
{
	char *str = "ola";
	char *teste = NULL;

	teste = ft_strdup(str);
	printf("%s", teste);
	free(teste);
	return (0);
}
 */