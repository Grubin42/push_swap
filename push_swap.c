/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:04:55 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 11:56:03 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack;

	stack.stack_a = NULL;
	stack.stack_b = NULL;
	stack.new_tab = NULL;
	stack.stack_a_bis = NULL;
	stack.size_b = 0;
	stack = ft_check_error(argc, argv, stack);
	stack = ft_sorted_index(stack);
	if (stack.size_a <= 3)
		stack = ft_sort_three(stack);
	else if (stack.size_a > 3 && stack.size_a <= 5)
		stack = ft_sort_five(stack);
	else
		stack = ft_sort(stack);
	free(stack.stack_a);
	free(stack.stack_b);
	free(stack.stack_a_bis);
	free(stack.new_tab);
	exit(0);
	return (0);
}
