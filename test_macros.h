/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_macros.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:01:23 by dda-silv          #+#    #+#             */
/*   Updated: 2014/11/03 22:01:39 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MACROS_H
# define TEST_MACROS_H

# include <stdio.h>

# define _begin printf("%s\n", __func__ + 5)
# define _done do { _close_pending(); printf("\n"); } while(0)
# define FAIL() printf("failure in %s() line %d\n", __func__, __LINE__)
# define _assert(test) do { if (!(test)) { FAIL(); return 1; } } while(0)
# define _assert_equal(res1, res2) do { if (res1 != res2) { printf("expected %p to equal %p\n", res1, res2); FAIL(); return 1; } } while(0)
# define _assert_equal_str(str1, str2) do { if (!strcmp(str1, str2)) { printf("expected %s to equal %s\n"); FAIL(); return 1; } } while(0)
# define _verify(test) do { int r = test(); tests_run++; if (r) { tests_failed++; return (r); } } while(0)

#endif
