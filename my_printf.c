#include "my_printf.h"

int	my_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	my_format(va_list args, const char format)
{
	int	temp;

	temp = 0;
	if (format == 'c')
		temp += my_printchar(va_arg(args, int));
	if (format == 's')
		temp += my_putstr(va_arg(args, char *));
	if (format == 'd' || format == 'i')
		temp += my_printnbr(va_arg(args, int));
	if (format == 'x')
		temp += my_printhex(va_arg(args, int), 'x');
	if (format == 'X')
		temp += my_printhex(va_arg(args, int), 'X');
	if (format == '%')
		temp += my_printpercent();
	if (format == 'p')
		temp += my_printptr(va_arg(args, long));
	if (format == 'u')
		temp += my_printunbr(va_arg(args, unsigned int));
	return (temp);
}

int	my_printf(const char *str, ...)
{
	int		temp;
	int		i;
	va_list	args;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			temp += my_format(args, str[i + 1]);
			i++;
		}
		else
			temp += my_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (temp);
}
