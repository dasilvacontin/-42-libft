/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_macros.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:01:23 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 18:30:12 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MACROS_H
# define TEST_MACROS_H

# include <stdio.h>

# define FAIL() printf("failure in %s() line %d\n", __func__, __LINE__)
# define _assert(test) do { if (!(test)) { FAIL(); return 1; } } while(0)
# define _assert_equal(res1, res2) do { if (res1 != res2) { printf("expected %p to equal %p\n", res1, res2); FAIL(); return 1; } } while(0)
# define _verify(test) do { int r=test(); tests_run++; if(r) { tests_failed++; return r;} } while(0)

#endif
