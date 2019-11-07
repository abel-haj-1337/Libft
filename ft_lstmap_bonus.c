/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 07:38:22 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/07 02:08:21 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *nlst;

	nlst = malloc(sizeof(t_list));
	if (!nlst)
		return (NULL);
	while (lst)
	{
		nlst->content = f(lst->content);
		if (lst->content)
			del(lst->content); //
		nlst = lst;
//		ft_putstr("bingo\n");
//		free(lst);
		lst = lst->next;
		nlst = lst;
	}
	return (nlst);
}

#include <string.h>
#include <stdio.h>

void		*map_f(void *data)
{
	return (data);
}

int			main(void)
{
	t_list *l = ft_lstnew(strdup(" 1 2 3 "));
	t_list *ret;
	void	*(*lstmap_f)(void *);

	lstmap_f = &map_f;
	l->next = ft_lstnew(strdup("ss"));
	l->next->next = ft_lstnew(strdup("-_-"));
	ret = ft_lstmap(l, lstmap_f, ((void *)0));
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
		printf("Wow! The prophecy became true...\n");
	else
		printf("Hmmm... How unexpected!\n");
}
