/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:10:39 by grubin            #+#    #+#             */
/*   Updated: 2021/07/28 17:16:23 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
	{
		i = nb;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	ft_putchar(i + '0');
}

//int main()
//{
//	ft_putnbr(-2147483648);
//}
