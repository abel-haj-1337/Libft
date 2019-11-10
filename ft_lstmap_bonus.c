/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 07:38:22 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/08 22:24:44 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list **head;
	t_list *nlst;

	head = &nlst;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		nlst = ft_lstnew(f(lst->content));
		if (!nlst)
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		lst = lst->next;
		nlst = nlst->next;
	}
	return (*head);
}
