/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:25:25 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/11 13:27:42 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdupc(const char *s, char c)
{
	char	*str;

	str = ft_strallocc(s, c);
	if (str)
		ft_stpcpyc(str, s, c);
	return (str);
}
