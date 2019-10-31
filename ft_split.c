/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:55:23 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/30 22:09:52 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_wrdsplit(char const *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = i;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	prev;
	char	**result_array;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	prev = 0;
	k = ft_wrdsplit(s, c);
	result_array = (char **)malloc(sizeof(char *) * (k + 1));
	if (!result_array)
		return (NULL);
	while (s[i] && j < k)
	{
		while (s[i] == c)
			i++;
		prev = i;
		while (s[i] && s[i] != c)
			i++;
		if (ft_substr(s, prev, i - prev) == NULL)
		{
			free(result_array);
			return (NULL);
		}
		result_array[j] = ft_substr(s, prev, i - prev);
		j++;
		i++;
	}
	result_array[j] = NULL;
	return (result_array);
}
