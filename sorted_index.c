/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:27:02 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 13:30:52 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sort_newtab(t_stack stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < stack.size_a - 1)
	{
		j = i + 1;
		while (j < stack.size_a)
		{
			if (stack.new_tab[i] > stack.new_tab[j])
			{
				tmp = stack.new_tab[i];
				stack.new_tab[i] = stack.new_tab[j];
				stack.new_tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (stack);
}

t_stack	ft_sorted_index(t_stack stack)
{
	int	i;
	int	j;
	int	new_value;

	new_value = 0;
	i = 0;
	stack = ft_sort_newtab(stack);
	while (i < stack.size_a)
	{
		j = 0;
		while (j < stack.size_a)
		{
			if (stack.new_tab[i] == stack.stack_a_bis[j])
			{
				stack.stack_a[j] = new_value;
				new_value++;
			}
			j++;
		}
		i++;
	}
	return (stack);
}
