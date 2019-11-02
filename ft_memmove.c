/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:40:53 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/01 23:28:11 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*f_string;
	char			*s_string;

	i = 0;
	f_string = (char *)dst;
	s_string = (char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			f_string[len - 1] = s_string[len - 1];
			len--;
		}
	}
	else if (src != NULL)
	{
		while (i < len)
		{
			f_string[i] = s_string[i];
			i++;
		}
	}
	return (void *)(f_string);
}
