/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:04:51 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 13:20:25 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	*sleft;
	if (!dst)
		return (0);
	sleft = size;
	while (sleft > 1 && sleft-- && *dst)
		dst++;
	if (src)
		while (sleft > 1 && sleft-- && *src)
			*dst++ = *src++;
	*dst = '\0';
	return (size - sleft);
}
