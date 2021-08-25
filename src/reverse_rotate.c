/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:22:49 by rcollas           #+#    #+#             */
/*   Updated: 2021/08/25 11:28:40 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_list **pile_a)
{
	t_list	*next_to_last;
	t_list	*last_a;

	next_to_last = ft_lstnext_to_last(*pile_a);
	last_a = ft_lstlast(*pile_a);
	last_a->next = *pile_a;
	next_to_last->next = NULL;
	*pile_a = last_a;
}

void	rrb(t_list **pile_b)
{
	t_list	*next_to_last;
	t_list	*last_b;

	next_to_last = ft_lstnext_to_last(*pile_b);
	last_b = ft_lstlast(*pile_b);
	last_b->next = *pile_b;
	next_to_last->next = NULL;
	*pile_b = last_b;
}

void	rrr(t_list **pile_a, t_list **pile_b)
{
	t_list	*next_to_last_a;
	t_list	*next_to_last_b;
	t_list	*last_a;
	t_list	*last_b;

	next_to_last_a = ft_lstnext_to_last(*pile_a);
	next_to_last_b = ft_lstnext_to_last(*pile_b);
	last_a = ft_lstlast(*pile_a);
	last_b = ft_lstlast(*pile_b);
	last_a->next = *pile_a;
	last_b->next = *pile_b;
	next_to_last_a->next = NULL;
	next_to_last_b->next = NULL;
	*pile_a = last_a;
	*pile_b = last_b;
}