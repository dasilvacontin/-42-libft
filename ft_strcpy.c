/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:19:36 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/26 16:25:11 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char	*ret;

	if (!dst || !src)
		return (dst);
	ret = (char *)dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}
