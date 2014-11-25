char	*ft_stpcpyc(char *dst, const char *src, char c)
{
	while (*src && *src != c)
		*dst++ = *src++;
	*dst = c;
	return (dst);
}
