/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:02:31 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/01 17:46:20 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (count * size > i)
	{
		ptr[i] = 0;
		i++;
	}
	return (void *)(ptr);
}
