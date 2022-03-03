/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:58:45 by grubin            #+#    #+#             */
/*   Updated: 2022/01/07 14:52:09 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_atoi(const char *str)
{
	int				i;
	long long int	number;
	int				signe;

	signe = 1;
	i = 0;
	number = 0;
	while (*str > 0 && *str <= 32)
	{
		if (*str == 27)
			return (0);
		str++;
	}
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*(str + i) >= 48 && *(str + i) <= 57)
		number = number * 10 + *(str + i++) - '0';
	return (number * signe);
}
