/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:21:41 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 13:26:12 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sort_one_first(t_stack stack)
{
	if (stack.stack_a[1] < stack.stack_a[2])
		return (stack);
	if (stack.stack_a[1] > stack.stack_a[2])
	{
		stack = ft_reverses_a(stack);
		stack = ft_swap_a(stack);
	}
	return (stack);
}

t_stack	ft_sort_three_first(t_stack stack)
{
	if (stack.stack_a[1] < stack.stack_a[2])
	{
		stack = ft_reverses_a(stack);
		stack = ft_reverses_a(stack);
	}
	else if (stack.stack_a[1] > stack.stack_a[2])
	{
		stack = ft_rotate_a(stack);
		stack = ft_swap_a(stack);
	}
	return (stack);
}

t_stack	ft_sort_two_first(t_stack stack)
{
	if (stack.stack_a[1] < stack.stack_a[2])
		stack = ft_swap_a(stack);
	else if (stack.stack_a[1] > stack.stack_a[2])
		stack = ft_reverses_a(stack);
	return (stack);
}

t_stack	ft_sort_three(t_stack stack)
{
	if (stack.stack_a[0] < stack.stack_a[1]
		&& stack.stack_a[0] < stack.stack_a[2])
		stack = ft_sort_one_first(stack);
	else if (stack.stack_a[0] > stack.stack_a[1]
		&& stack.stack_a[0] > stack.stack_a[2])
		stack = ft_sort_three_first(stack);
	else
		stack = ft_sort_two_first(stack);
	return (stack);
}
