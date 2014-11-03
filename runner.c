/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:57:32 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 18:32:56 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "test_macros.h"
#include "tests.h"

int	tests_run = 0;
int tests_failed = 0;

int	all_tests()
{
	_verify(test_ft_memcpy);
	return (0);
}

int	main(int argc, char **argv)
{
	int result;

	printf("\n");
	result = all_tests();
	if (result == 0)
		printf("PASSED\n");
	printf("Tests passed: %d/%d\n\n", tests_run - tests_failed, tests_run);
	return (result != 0);
}

