/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:58:20 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 15:41:34 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	while (n--)
	{
		*(byte *)dst++ = *(byte *)src;
		if (*(byte *)src++ == (byte)c)
			return (dst);
	}
	return (NULL);
}
