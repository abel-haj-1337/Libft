/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:32:39 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/01 23:26:27 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strindof(const char *s, char c)
{
	size_t	i;
	int		not_found;

	i = 0;
	not_found = -1;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (not_found);
}
