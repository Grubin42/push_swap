/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:04:06 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 11:31:45 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sort_stack_a(t_stack stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack.size_a - 1)
	{
		j = i + 1;
		if (stack.stack_a[i] < stack.stack_a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

t_stack	ft_sort(t_stack stack)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = stack.size_a;
	while (i < size - 1)
	{
		j = 0;
		while (j < size && !ft_check_sort_stack_a(stack))
		{
			if ((stack.stack_a[0] >> i) & 1)
				stack = ft_rotate_a(stack);
			else
				stack = ft_push_b(stack);
			j++;
		}
		i++;
		while (stack.size_b)
			stack = ft_push_a(stack);
	}
	return (stack);
}
