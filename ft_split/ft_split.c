/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:33:36 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/18 18:39:51 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


char	**ft_split(char *str);
int	ft_count_letters(char *str, int i);
int	ft_count_words(char *str);
 
int	ft_count_letters(char *str, int i)
{
	int len;
	
	len = 0; 
	while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
	{
		i++;
		len++;
	}
	return (len);
}

int	ft_count_words(char *str)
{
	int w;
	int	i;

	w = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			w++;
			while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
				i++;
		}
	}
	return (w);
}


char	**ft_split(char *str)
{
	char 	**split;
	int		i;
	int		w;
	int		n;
	int		l;
	int		j;
	
	n = 0;
	w = 0;
	i = 0;
	l = 0;
	j = 0;
	split = NULL;
	if (!str)
		return (NULL);
	w = ft_count_words(str);
	split = malloc((w + 1)* sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (n < w)
	{
		while (str[i] && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i] && n < w)
		{
			l = ft_count_letters(str, i);
			split[n] = malloc((l + 1) * sizeof(char));
			if (split[n] == NULL)
            {
                while (n > 0)
                    free(split[--n]);
                free(split);
                return (NULL);
            }
			j = 0;
			while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
			{
				split[n][j] = str[i];
				i++;
				j++;
			}
			split[n][j] = '\0';
			n++;			
		}
	}
	split[n] = NULL;
	return (split);	
}

/* int main (int argc, char **argv)
{
	char **res;
	// char *str = "ola tudo bem";
	
	if (argc != 2)
		return (1);
	res = ft_split(argv[1]);
	while (*res)
	{
		printf("%s\n", *res);
		res++;
	}
	return (0);
}
 */