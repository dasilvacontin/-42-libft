/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   runner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:57:32 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/04 15:48:20 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "test_macros.h"
#include "tests.h"

int	all_tests()
{
	_verify(test_ft_memcpy);
	_verify(test_ft_memset);
	_verify(test_ft_bzero);
	return (0);
}

int	main(int argc, char **argv)
{
	int result;

	tests_failed = 0;
	tests_run = 0;
	printf("\n");
	result = all_tests();
	printf("\n");

	if (result == 0) printf("All good! :D\n");
	else printf("(/>.<)/|__|\n");
	
	printf("Tests passed: %d/%d\n\n", tests_run - tests_failed, tests_run);
	return (result != 0);
}

