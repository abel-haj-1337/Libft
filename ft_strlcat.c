/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:10:42 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/03 21:38:05 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;
	size_t			k;
	unsigned char	*f_string;

	j = 0;
	k = ft_strlen(src);
	i = ft_strlen(dst);
	if (!size)
		return (k);
	f_string = (unsigned char *)dst;
	while (src[j] && size > i + 1)
	{
		f_string[i] = src[j];
		i++;
		j++;
	}
	if (size > i)
		f_string[i] = '\0';
	if (size > ft_strlen(dst))
		return (i + k - j);
	return (size + k);
}
