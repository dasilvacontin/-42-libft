/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:04:51 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/26 16:35:38 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sleft;

	sleft = size;
	while (*dst && sleft > 0 && sleft--)
		dst++;
	while (*src && sleft > 1 && sleft--)
		*dst++ = *src++;
	if (sleft == 1)
		*dst = '\0';
	return (size - sleft);
}
