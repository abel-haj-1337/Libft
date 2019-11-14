/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:39:00 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/11 00:53:09 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*f_string;
	char	*s_string;

	i = 0;
	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	f_string = (char *)dst;
	s_string = (char *)src;
	while (s_string[i] && size > i + 1)
	{
		f_string[i] = s_string[i];
		i++;
	}
	if (i != 0 || len == 0)
		f_string[i] = '\0';
	return (len);
}
