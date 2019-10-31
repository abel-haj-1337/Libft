/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:02:15 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/19 22:20:43 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*string;

	i = 0;
	j = i;
	string = (char *)haystack;
	if (!needle[j])
		return (char *)(haystack);
	while (haystack[i] && len > i)
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j])
			{
				i++;
				j++;
			}
		}
		if (needle[j] == haystack[i])
			return (char *)(haystack + i - j);
		i++;
	}
	return (0);
}
