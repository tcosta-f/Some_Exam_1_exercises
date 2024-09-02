/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:14:19 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/06/15 21:30:30 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int sig;
	int num;
	
	sig = 1;
	num = 0;
	while ((*str >= 7 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sig = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num = num + (*str - '0');
		str++;
	}
	return (num * sig);
}
/* 
int main(void)
{
	char *str = "-34532";
	int i;

	i = ft_atoi(str);
	printf("%i", i);
	return (0);
} */