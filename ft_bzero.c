/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:36:56 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/18 03:15:41 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*string;

	i = 0;
	string = (char *)s;
	while (n > i)
	{
		string[i] = 0;
		i++;
	}
}
