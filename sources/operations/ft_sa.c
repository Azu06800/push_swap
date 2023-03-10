/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhamdan <nhamdan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:49:33 by nhamdan           #+#    #+#             */
/*   Updated: 2022/12/18 10:52:41 by nhamdan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sa(t_stack *stack)
{
	t_list	*a;
	int		tmp;

	a = stack->a;
	tmp = *((int *) a->first->next->content);
	*((int *) a->first->next->content) = *((int *) a->first->content);
	*((int *) a->first->content) = tmp;
	ft_putstr_fd("sa\n", 1);
}
