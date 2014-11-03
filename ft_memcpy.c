/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:34:49 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 18:48:49 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	byte	*bdst;
	byte	*bsrc;
	
	if (!n)
		return (dst);
	bdst = (byte *) dst;
	bsrc = (byte *) src;
	i = -1;
	while (++i < n && (bdst + i) && (bsrc + i))
		bdst[i] = bsrc[i];
	return (dst);
}
