/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:37:02 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 11:40:50 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_if_forest(t_stack stack)
{
	while (stack.size_b != 1)
	{
		if (stack.stack_a[0] == 0)
			stack = ft_push_b(stack);
		if (stack.stack_a[1] == 0)
			stack = ft_swap_a(stack);
		if (stack.stack_a[2] == 0)
			stack = ft_rotate_a(stack);
		if (stack.stack_a[3] == 0 || stack.stack_a[4] == 0)
			stack = ft_reverses_a(stack);
	}
	while (stack.size_b != 2)
	{
		if (stack.stack_a[0] == 1)
			stack = ft_push_b(stack);
		if (stack.stack_a[1] == 1)
			stack = ft_swap_a(stack);
		if (stack.stack_a[2] == 1 || stack.stack_a[3] == 1)
			stack = ft_reverses_a(stack);
	}
	return (stack);
}

t_stack	ft_little_if_forest(t_stack stack)
{
	while (stack.size_b != 1)
	{
		if (stack.stack_a[0] == 0)
			stack = ft_push_b(stack);
		if (stack.stack_a[1] == 0)
			stack = ft_swap_a(stack);
		if (stack.stack_a[2] == 0 || stack.stack_a[3] == 0)
			stack = ft_reverses_a(stack);
	}
	return (stack);
}

t_stack	ft_sort_five(t_stack stack)
{
	while (!ft_check_sort_stack_a(stack))
	{
		if (stack.size_a == 5)
			stack = ft_if_forest(stack);
		else if (stack.size_a == 4)
			stack = ft_little_if_forest(stack);
		if (!ft_check_sort_stack_a(stack))
			stack = ft_sort_three(stack);
		if (stack.stack_b[0] < stack.stack_b[1])
			stack = ft_swap_b(stack);
		if (stack.stack_b[0] > stack.stack_b[1] || stack.size_b == 1)
		{
			stack = ft_push_a(stack);
			stack = ft_push_a(stack);
		}
	}
	return (stack);
}
