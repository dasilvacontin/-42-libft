#include "libft.h"

char	*ft_strqdupc(const char **s1, char c)
{
	char	*str;

	str = ft_strallocc(*s1, c);
	if (str)
		*s1 = ft_stpcpyc(str, *s1, c);
	return (str);
}
