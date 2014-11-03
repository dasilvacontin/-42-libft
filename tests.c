/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:05:33 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 18:46:40 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_macros.h"
#include <string.h>
#include "libft.h"

int	test_ft_memcpy()
{
	_assert_equal(memcpy(NULL, NULL, 2), ft_memcpy(NULL, NULL, 2));
	_assert_equal(memcpy((void *) -1, (void *) -1, 2), ft_memcpy((void *) -1, (void *) -1, 2));
	return (0);
}
