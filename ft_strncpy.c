/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:32:56 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 12:49:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	char	*ret;

	if (!dst || !n)
		return (dst);
	if (!ret)
		return (ft_bzero(dst, n));
	while (n-- && *src)
		*dst++ = *src++;
	*dst = *src;
	ft_bzero(dst, n);
	return (ret);
}
