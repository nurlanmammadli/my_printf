#include "my_printf.h"

int	my_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	my_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
