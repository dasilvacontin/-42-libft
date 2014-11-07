/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:00:25 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 15:52:38 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*ret;

	ret = dst;
	if (dst < src)
		while ((dst - ret) < len)
			*(byte *)dst++ = *(byte *)src++;
	else
		while (len-- > 0)
			((byte *)dst)[len] = ((byte *)src)[len];
	return (ret);
}
