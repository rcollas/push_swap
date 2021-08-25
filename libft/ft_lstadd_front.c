/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:48:41 by rcollas           #+#    #+#             */
/*   Updated: 2021/08/24 21:59:04 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	printf("new before = %d \n", new->content);
	printf("alst before = %d \n", (*alst)->content);
	new->next = *alst;
	printf("new after= %d \n", new->content);
	*alst = new;
	printf("alst after = %d \n", (*alst)->content);
}
