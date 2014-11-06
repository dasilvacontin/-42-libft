/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:00:25 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/06 14:36:58 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	void		*ret;

	if (!len || !dst || !src || dst == src)
		return (dst);
	ret = dst;
	if (dst < src)
	{
		i = -1;
		while (++i < len)
			*(byte *)dst++ = *(byte *)src++;
	}
	else
	{
		i = len;
		while (i-- > 0)
			((byte *)dst)[i] = ((byte *)src)[i];
	}
	return (ret);
}
