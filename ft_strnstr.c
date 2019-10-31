/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:02:15 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/25 02:06:21 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	needle_len;
	char			*string;

	i = 0;
	j = i;
	needle_len = ft_strlen(needle);
	string = (char *)haystack;
	if (needle_len == 0)
		return (char *)(haystack);
	while (haystack[i] && len > i)
	{
		while (haystack[i] == needle[j] && haystack[i] && len > i)
		{
			i++;
			j++;
		}
		if (needle[j])
			j = 0;
		else
			return (char *)(haystack + i - j);
		i++;
	}
	return (0);
}
