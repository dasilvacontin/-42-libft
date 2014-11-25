#include "libft.h"

void	put_digit_recursive_fd(int n, int fd)
{
	if ((n / 10) > 0)
		put_digit_recursive_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && (n = -n))
		ft_putchar_fd('-', fd);
	put_digit_recursive_fd(n, fd);
}

