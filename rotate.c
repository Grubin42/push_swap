/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:00:10 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 12:04:54 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_rotate_a(t_stack stack)
{
	int				i;
	long long int	tmp;

	tmp = stack.stack_a[0];
	i = -1;
	while (++i < stack.size_a)
		stack.stack_a[i] = stack.stack_a[i + 1];
	stack.stack_a[stack.size_a - 1] = tmp;
	write(1, "ra\n", 3);
	return (stack);
}

t_stack	ft_rotate_b(t_stack stack)
{
	int				i;
	long long int	tmp;

	tmp = stack.stack_b[0];
	i = -1;
	while (++i < stack.size_b)
		stack.stack_b[i] = stack.stack_b[i + 1];
	stack.stack_b[stack.size_b - 1] = tmp;
	write(1, "rb\n", 3);
	return (stack);
}

t_stack	ft_rotate_a_b(t_stack stack)
{
	int				i;
	long long int	tmp;

	tmp = stack.stack_a[0];
	i = -1;
	while (++i < stack.size_a)
		stack.stack_a[i] = stack.stack_a[i + 1];
	stack.stack_a[stack.size_a - 1] = tmp;
	tmp = stack.stack_b[0];
	i = -1;
	while (++i < stack.size_b)
		stack.stack_b[i] = stack.stack_b[i + 1];
	stack.stack_b[stack.size_b - 1] = tmp;
	write(1, "rr\n", 3);
	return (stack);
}
