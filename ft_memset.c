/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:27:41 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/01 23:28:23 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;

	i = 0;
	str = (char *)b;
	while (len > i)
	{
		str[i] = c;
		i++;
	}
	return (void *)str;
}