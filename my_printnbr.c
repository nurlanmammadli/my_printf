#include "my_printf.h"

static int	len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*my_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	num = n;
	i = len(num);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		str[i--] = '0' + (num % 10);
		num = num / 10;
	}
	return (str);
}

int	my_printnbr(int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = my_itoa(n);
	len = my_strlen(nbr);
	free (nbr);
	return (len);
}
