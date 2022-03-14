#include "my_printf.h"

void	my_puthexx(size_t n)
{
	if (n >= 16)
	{
		my_puthexx(n / 16);
		my_puthexx(n % 16);
	}
	else
	{
		if (n < 10)
			my_putchar(n + '0');
		else
			my_putchar(n - 10 + 'a');
	}
}

int	my_hexxlen(size_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

int	my_printptr(unsigned long long ptr)
{
	size_t	len;

	len = 0;
	len = len + write (1, "0x", 2);
	if (ptr == 0)
		len = len + write(1, "0", 1);
	else
	{
		my_puthexx(ptr);
		len = len + my_hexxlen(ptr);
	}
	return (len);
}
