#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

int ft_count(int nbr)
{
	int i = 0;
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return i;
}
char *ft_itoa(int num)
{
	int count = ft_count(num) - 1;
	int last = ft_count(num);
	int i = 0;
	char *str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return NULL;
	long nbr = num;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		i = nbr % 10;
		str[count] = i + '0';
		nbr/=10;
		count--;
	}
	str[last] = '\0';
	return str;
}
