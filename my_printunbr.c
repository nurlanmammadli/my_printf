#include "my_printf.h"

int	len(unsigned int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*my_unsigned_itoa(unsigned int n)
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
	while (num > 0)
	{
		str[i--] = '0' + (num % 10);
		num = num / 10;
	}
	return (str);
}

int	my_printunbr(unsigned int n)
{
	int		len;
	char	*nbr;

	len = 0;
	if (n == 0)
		len = len + write(1, "0", 1);
	else
	{
		nbr = my_unsigned_itoa(n);
		len = len + my_strlen(nbr);
		free (nbr);
	}
	return (len);
}
