/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:55:30 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 16:00:58 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	char *it;

	if (!str)
		return 0;
	it = str;
	while (*it)
		++it;
	return (it - str);
}