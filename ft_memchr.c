/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satouaya <satouaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:52:34 by aysato            #+#    #+#             */
/*   Updated: 2022/07/31 09:45:30 by satouaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s != (void *)0 || n != 0)
	{
		while (n > i)
		{
			if (*(unsigned char *)(s + i) == (unsigned char)c)
				return ((void *)(s + i));
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
