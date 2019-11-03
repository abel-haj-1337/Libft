/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:48:10 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/03 20:07:00 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*f_string;
	char			*s_string;

	i = 0;
	f_string = (char *)dst;
	s_string = (char *)src;
	if (dst == src)
		return (dst);
	while (n > i && (dst != NULL || src != NULL))
	{
		f_string[i] = s_string[i];
		i++;
	}
	return (void *)(f_string);
}
