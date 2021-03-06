/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:50:55 by rcollas           #+#    #+#             */
/*   Updated: 2021/09/22 01:24:20 by rcollas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **first_lst, t_list *scnd_list)
{
	if (!*first_lst)
		*first_lst = ft_lstnew(scnd_list->content);
	else
		ft_lstadd_front(first_lst, scnd_list);
}
