/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khoubaib <khoubaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:49:34 by khoubaib          #+#    #+#             */
/*   Updated: 2022/10/07 20:49:34 by khoubaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev;
	t_list	*curr;

	if (!lst || !del)
		return ;
	prev = *lst;
	curr = (*lst)->next;
	while (prev)
	{
		(*del)(prev->content);
		free(prev);
		prev = curr;
		if (curr)
			curr = curr->next;
	}
	*lst = NULL;
}
