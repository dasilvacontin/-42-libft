/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:32:55 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/07 16:35:59 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*it1;
	char	*it2;

	if (!*s2)
		return (s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			it1 = s1 + 1;
			it2 = s2 + 1;
			while (*it1 && *it2 && *it1 == *it2)
			{
				++it1;
				++it2;
			}
			if (!*it2)
				return (s1);
		}
		s1++;
	}
	return (NULL);
}
