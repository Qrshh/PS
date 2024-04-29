/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrshh <qrshh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:03:15 by hbouchel          #+#    #+#             */
/*   Updated: 2024/04/27 00:33:16 by qrshh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	simple_sort(t_stack **stack_a, t_stack **stack_b)
{
    int	size;

	if(is_sorted(stack_a) || ft_lstsize(*stack_a) == 0 || ft_lstsize(*stack_a) == 1)
		return;
	size = ft_lstsize(*stack_a);
	if(size == 2)
		sa(stack_a);
	else if(size == 3)
		sort_3(stack_a);
	else if(size == 4)
		sort_4(stack_a, stack_b);
	else if(size == 5)
		sort_5(stack_a, stack_b);
}