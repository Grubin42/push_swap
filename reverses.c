/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverses.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:32:35 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 11:35:24 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_reverses_a(t_stack stack)
{
	int				i;
	long long int	tmp;

	tmp = stack.stack_a[stack.size_a - 1];
	i = stack.size_a;
	while (i-- > 0)
		stack.stack_a[i] = stack.stack_a[i - 1];
	stack.stack_a[0] = tmp;
	write(1, "rra\n", 4);
	return (stack);
}

t_stack	ft_reverses_b(t_stack stack)
{
	int				i;
	long long int	tmp;

	tmp = stack.stack_b[stack.size_b - 1];
	i = stack.size_b;
	while (i-- > 0)
		stack.stack_b[i] = stack.stack_b[i - 1];
	stack.stack_b[0] = tmp;
	write(1, "rrb\n", 4);
	return (stack);
}

t_stack	ft_reverses_a_b(t_stack stack)
{
	int				i;
	long long int	tmp;

	tmp = stack.stack_a[stack.size_a - 1];
	i = stack.size_a;
	while (i-- > 0)
		stack.stack_a[i] = stack.stack_a[i - 1];
	stack.stack_a[0] = tmp;
	tmp = stack.stack_b[stack.size_b - 1];
	i = stack.size_b;
	while (i-- > 0)
		stack.stack_b[i] = stack.stack_b[i - 1];
	stack.stack_b[0] = tmp;
	write(1, "rrr\n", 4);
	return (stack);
}
