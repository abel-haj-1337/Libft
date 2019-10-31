/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 00:19:53 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/25 00:29:35 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strcountch(const char *s, size_t n)
{
	unsigned long	i;
	int				c;

	i = 0;
	c = 0;
	while (n > i)
	{
		c += s[i];
		i++;
	}
	return (c);
}
