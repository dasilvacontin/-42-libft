/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:13:19 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/26 15:21:09 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	while (n--)
	{
		if ((*(t_byte *)s1 != *(t_byte *)s2) ||
				(!*(t_byte *)s1 && !*(t_byte *)s2))
			return (*(t_byte *)s1 - *(t_byte *)s2);
		s1++;
		s2++;
	}
	return (0);
}
