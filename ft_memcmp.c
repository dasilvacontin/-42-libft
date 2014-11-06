/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:13:19 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/06 15:28:54 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n || !s1 || !s2)
		return (0);
	while (n--)
	{
		if (*(byte *)s1 != *(byte *)s2)
			return (*(byte *)s1 - *(byte *)s2);
		s1++;
		s2++;
	}
	return (0);
}
