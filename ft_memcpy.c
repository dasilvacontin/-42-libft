/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:34:49 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/05 16:30:56 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	if (!dst || !src)
		return (dst);
	ret = dst;
	while (n--)
	{
		*(byte *)dst++ = *(byte *)src++;
	}
	return (ret);
}
