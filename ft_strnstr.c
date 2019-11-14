/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:02:15 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/13 02:25:52 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = i;
	if (ft_strlen(needle) == 0)
		return (char *)(haystack);
	if (!len)
		return (NULL);
	while (haystack[i] && len > i)
	{
		while (haystack[i] && haystack[i] == needle[j] && len > i)
		{
			i++;
			j++;
		}
		if (needle[j])
			j = 0;
		else
			return (char *)(haystack + i - j);
		if (haystack[i])
			i++;
	}
	return (0);
}
