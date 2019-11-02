/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:12:09 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/01 23:25:14 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*f_string;
	unsigned char	*s_string;

	i = 0;
	f_string = (unsigned char *)s1;
	s_string = (unsigned char *)s2;
	while (n > i && ft_strlen(s1) >= i && ft_strlen(s2) >= i)
	{
		if (f_string[i] != s_string[i])
			return (f_string[i] - s_string[i]);
		i++;
	}
	return (0);
}
