/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grubin <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:02:44 by grubin            #+#    #+#             */
/*   Updated: 2022/02/17 11:27:50 by grubin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	long long int	*stack_a;
	long long int	*stack_b;
	long long int	*new_tab;
	long long int	*stack_a_bis;
	int				size_a;
	int				size_b;
}					t_stack;
t_stack				ft_check_error(int argc, char **argv, t_stack stack);
t_stack				ft_sort(t_stack stack);
t_stack				ft_swap_a(t_stack stack);
t_stack				ft_swap_b(t_stack stack);
t_stack				ft_swap_a_b(t_stack stack);
t_stack				ft_push_a(t_stack stack);
t_stack				ft_push_b(t_stack stack);
t_stack				ft_rotate_a(t_stack stack);
t_stack				ft_rotate_b(t_stack stack);
t_stack				ft_rotate_a_b(t_stack stack);
t_stack				ft_reverses_a(t_stack stack);
t_stack				ft_reverses_b(t_stack stack);
t_stack				ft_reverses_a_b(t_stack stack);
t_stack				ft_sorted_index(t_stack stack);
t_stack				ft_sort_three(t_stack stack);
t_stack				ft_sort_five(t_stack stack);
int					ft_check_sort_stack_a(t_stack stack);

#endif
