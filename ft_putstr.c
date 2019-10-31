/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:10:45 by abel-haj          #+#    #+#             */
/*   Updated: 2019/10/25 08:31:55 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr(const char *s)
{
	unsigned long	i;
	unsigned char	*string;

	if (s)
	{
		string = (unsigned char *)s;
		i = 0;
		while (string[i])
		{
			write(1, &string[i], 1);
			i++;
		}
	}
}
