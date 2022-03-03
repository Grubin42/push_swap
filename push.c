/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:13:07 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 11:24:26 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_push_a(t_stack stack)
{
	int	i;

	i = stack.size_a + 1;
	if (stack.size_b == 0)
		return (stack);
	if (stack.size_a == 0)
		stack.stack_a[0] = stack.stack_b[0];
	if (stack.size_a > 0)
	{
		while (--i > 0)
			stack.stack_a[i] = stack.stack_a[i - 1];
		stack.stack_a[0] = stack.stack_b[0];
	}
	i = -1;
	while (++i < stack.size_b)
		stack.stack_b[i] = stack.stack_b[i + 1];
	stack.size_a++;
	stack.size_b--;
	write(1, "pa\n", 3);
	return (stack);
}

t_stack	ft_push_b(t_stack stack)
{
	int	i;

	i = stack.size_b + 1;
	if (stack.size_a == 0)
		return (stack);
	if (stack.size_b == 0)
		stack.stack_b[0] = stack.stack_a[0];
	if (stack.size_b > 0)
	{
		while (--i > 0)
			stack.stack_b[i] = stack.stack_b[i - 1];
		stack.stack_b[0] = stack.stack_a[0];
	}
	i = -1;
	while (++i < stack.size_a)
		stack.stack_a[i] = stack.stack_a[i + 1];
	stack.size_b++;
	stack.size_a--;
	write(1, "pb\n", 3);
	return (stack);
}
