/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:34:49 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/04 15:38:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	byte		*bdst;
	const byte	*bsrc;
	
	if (!n || !dst || !src || dst == src)
		return (dst);
	bdst = (byte *) dst;
	bsrc = (byte *) src;
	i = (dst < src? 0 : n - 1);
	while (0 <= i && i < n) {
		bdst[i] = bsrc[i];
		i += (dst < src? 1 : -1);
	}
	return (dst);
}
