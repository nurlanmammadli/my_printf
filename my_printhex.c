#include "my_printf.h"

void	my_puthex(unsigned int n, const char c)
{
	if (n >= 16)
	{
		my_puthex(n / 16, c);
		my_puthex(n % 16, c);
	}
	else
	{
		if (n < 10)
			my_putchar(n + '0');
		else if (c == 'x')
			my_putchar(n - 10 + 'a');
		else if (c == 'X')
			my_putchar(n - 10 + 'A');
	}
}

int	my_hexlen(unsigned int n)
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

int	my_printhex(unsigned int n, const char c)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		my_puthex(n, c);
	return (my_hexlen(n));
}
