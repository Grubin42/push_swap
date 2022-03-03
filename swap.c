/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:15:39 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 11:44:39 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_swap_a(t_stack stack)
{
	int	i;

	if (stack.size_a == 0)
		return (stack);
	i = stack.stack_a[0];
	stack.stack_a[0] = stack.stack_a[1];
	stack.stack_a[1] = i;
	write(1, "sa\n", 3);
	return (stack);
}

t_stack	ft_swap_b(t_stack stack)
{
	int	i;

	if (stack.size_b == 0)
		return (stack);
	i = stack.stack_b[0];
	stack.stack_b[0] = stack.stack_b[1];
	stack.stack_b[1] = i;
	write(1, "sb\n", 3);
	return (stack);
}

t_stack	ft_swap_a_b(t_stack stack)
{
	int	i;
	int	j;

	if (stack.size_a == 0 || stack.size_b == 0)
		return (stack);
	i = stack.stack_a[0];
	j = stack.stack_b[0];
	stack.stack_a[0] = stack.stack_a[1];
	stack.stack_a[1] = i;
	stack.stack_b[0] = stack.stack_b[1];
	stack.stack_b[1] = j;
	write(1, "ss\n", 3);
	return (stack);
}
